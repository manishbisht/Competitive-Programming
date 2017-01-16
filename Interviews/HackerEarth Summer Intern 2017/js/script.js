/**
 * Created by Manish Bisht on 12/26/2016.
 */
$(document).ready(function () {
    // Menu Events
    $("#open").click(function () {
        openMenu();
    });

    $("#close").click(function () {
        closeMenu();
    });

    // Main context menu
    $('.content').bind('contextmenu', function (e) {
        e.preventDefault();
        loadMainOptions();
        var position = getPosition(e);
        $('.context-menu').css({top: position.y + 'px', left: position.x + 'px'}).toggle(true);
    });

    // Context menu for files and directory
    $(document).on('contextmenu', '.icon-inner-box', function (e) {
        e.preventDefault();
        loadOptions();
        lc = this.parentNode;
        var position = getPosition(e);
        $('.context-menu').css({top: position.y + 'px', left: position.x + 'px'}).toggle(true);
    });

    // Hides the context menu when clicked anywhere on document
    $(document).on('click', function () {
        $('.context-menu').toggle(false);
    });

    // Opens the home directory
    $(document).on('click', '.home', function () {
        lc = "";
        openDirectory();
    });

    // Opens the folder using top navigation
    $(document).on('click', '.root-data', function () {
        lc = this.parentNode;
        openDirectory(this.innerHTML);
    });

    // Opens Folder
    $(document).on('dblclick', '.icon-inner-box', function () {
        oldname = this.parentNode.childNodes[0].childNodes[1].innerHTML;
        openFolder(oldname);
    });

    // Creates Directory
    $(document).on('click', '#createdirectory', function () {
        var dirname = prompt("Enter Directory Name");
        createDirectory(getCurrentDirectory(), dirname);
    });

    // Creates Files
    $(document).on('click', '#createfile', function () {
        var filename = prompt("Enter File Name with extension");
        createFile(filename);
    });

    // Paste
    $(document).on('click', '#paste', function () {
        paste(getCurrentDirectory());
    });

    // Cut
    $(document).on('click', '#cut', function () {
        oldname = lc.childNodes[0].childNodes[1].innerHTML;
        type = lc.childNodes[0].childNodes[0].title;
        move(getCurrentDirectory() + '/' + oldname, type, "cut");
    });

    // Copy
    $(document).on('click', '#copy', function () {
        oldname = lc.childNodes[0].childNodes[1].innerHTML;
        type = lc.childNodes[0].childNodes[0].title;
        move(getCurrentDirectory() + '/' + oldname, type, "copy");
    });

    // Delete
    $(document).on('click', '#delete', function () {
        oldname = lc.childNodes[0].childNodes[1].innerHTML;
        removeData(getCurrentDirectory(), oldname);
        $("#" + lc.id).hide();
    });

    // Rename
    $(document).on('click', '#rename', function () {
        oldname = lc.childNodes[0].childNodes[1].innerHTML;
        $("#" + lc.childNodes[0].childNodes[1].id).attr('contentEditable', true).focus();
    });

    // If the folder or file is renamed
    $(document).on('blur', '.data-name', function () {
        $(this).attr('contentEditable', false);
        rename(oldname, $(this).text());
    });

    // Render home directory
    render(JSON.parse(localStorage.getItem('data')));

    // loads the side navigation
    loadSidebar("", "tree");

    // Sets the main view and side bar height depending upon available space
    $(".view").height(window.innerHeight - 57);
    $(".tree").height(window.innerHeight - 75);
});

// Global Variables
var data, oldname, lc;

// Opens Menu - only for Mobile
function openMenu() {
    $("#menu").toggle(true);
}

// Close Menu - only for Mobile
function closeMenu() {
    $("#menu").toggle(false);
}

// Renders the current directory
function render() {
    data = getData(getCurrentDirectory());
    var html = "";
    if (data) {
        for (var i = 0; i < data.length; i++) {
            html += '<div id="' + i + '" align="center" class="icon-box"><div class="icon-inner-box">';
            if (data[i].type == "directory") {
                html += '<img title="folder" class="icon" src="images/Folder.png">';

            }
            else {
                var ext = data[i].name.split('.').pop();
                if (ext == "jpg" || ext == "jpeg") {
                    html += '<img title="image" class="icon" src="images/image.png">';
                }
                else if (ext == "doc") {
                    html += '<img title="doc" class="icon" src="images/doc.png">';
                }
            }
            html += "<p id='t" + i + "' class='data-name'>" + data[i].name + "</p>";
            html += "</div></div>";
        }
        $('.view').html(html);
    }
    renderRoot();
}

// Loads the sidebar
function loadSidebar(dir, name) {
    data = getData(dir);
    var html = "";
    if ($('#' + name).html() == " + ") {
        $('#' + name).html(" - ");
    }
    else {
        $('#' + name).html(" + ");
    }
    if ($('.' + name).html() && dir !== "") {
        $('.' + name).html(html);
    }
    else {
        if (data) {
            for (var i = 0; i < data.length; i++) {
                if (data[i].type == "directory") {
                    var temp = dir + '/' + data[i].name;
                    var id = data[i].name.replace(' ', '-');
                    html += "<ul class='folder'>";
                    html += "<span onclick='loadSidebar(\"" + temp + "\", \"" + id + "\")' id='" + id + "'> + </span>";
                    html += "<img onclick='loadSidebar(\"" + temp + "\", \"" + id + "\")' title='folder' class='small-icon' src='images/Folder.png'>";
                    html += "<span onclick='loadSidebar(\"" + temp + "\", \"" + id + "\")'> " + data[i].name + "</span>";
                    html += "<div class='" + id + "'></div>"
                    html += "</ul>";
                }
                else {
                    var ext = data[i].name.split('.').pop();
                    html += '<li class="file">';
                    if (ext == "jpg" || ext == "jpeg") {
                        html += '<img title="image" class="small-icon" src="images/image.png">';
                    }
                    else if (ext == "doc") {
                        html += '<img title="doc" class="small-icon" src="images/doc.png">';
                    }
                    html += '<span> ' + data[i].name + '</span>';
                    html += "</li>";
                }
            }
            $('.' + name).html(html);
        }
    }
}

// Render the top Navigation
function renderRoot() {
    html = "";
    if (getCurrentDirectory()) {
        var array = getCurrentDirectory().split('/');
        array.splice(0, 1);
        root = "";
        for (var i = 0; i < array.length; i++) {
            root = root + '+' + array[i];
            html += " > <span class='root-data'>" + array[i] + "</span>";
        }

    }
    $('.rootdetails').html(html);
}

// Open directory
function openDirectory(dir) {
    if (lc && dir) {
        lc = lc.children;
        var root = "";
        for (var i = 0; i < lc.length; i++) {
            root += '/' + lc[i].innerHTML;
            if (lc[i].innerHTML == dir) {
                break;
            }
        }
        localStorage.setItem('current', root);
    }
    else {
        localStorage.setItem('current', "");
    }
    render();
}

// Get data from directory
function getData(dir) {
    data = JSON.parse(localStorage.getItem('data'));
    if (dir) {
        var array = dir.split('/');
        array.splice(0, 1);
        for (var i = 0; i < array.length; i++) {
            for (var j = 0; j < data.length; j++) {
                if (data[j].name == array[i]) {
                    data = data[j].children;
                    break;
                }
            }
        }
    }
    return data;
}

// Get current directory
function getCurrentDirectory() {
    return localStorage.getItem('current');
}

// Set the data in directory after sorting
function setData(dir, data) {
    var files = new Array();
    var folders = new Array();
    for (var i = 0; i < data.length; i++) {
        if (data[i].type == 'directory') {
            folders.push(data[i]);
        }
        else {
            files.push(data[i]);
        }
    }
    files = files.sort(function (a, b) {
        return (a['name'] > b['name']) ? 1 : ((a['name'] < b['name']) ? -1 : 0);
    });
    folders = folders.sort(function (a, b) {
        return (a['name'] > b['name']) ? 1 : ((a['name'] < b['name']) ? -1 : 0);
    });
    data = [];
    for (var i = 0; i < folders.length; i++) {
        data.push(folders[i]);
    }
    for (var i = 0; i < files.length; i++) {
        data.push(files[i]);
    }
    var dataa = JSON.parse(localStorage.getItem('data'));
    if (dir) {
        var array = dir.split('/');
        array.splice(0, 1);
        dataa = loadData(dataa, data, array, 0);
    }
    else {
        dataa = data;
    }
    localStorage.setItem('data', JSON.stringify(dataa));
}

// loads the new data in older data
function loadData(dataa, data, array, n) {
    if (n == array.length) {
        return data;
    }
    for (j = 0; j < dataa.length; j++) {
        if (array[n] == dataa[j].name) {
            n++;
            dataa[j].children = loadData(dataa[j].children, data, array, n);
        }
    }
    return dataa;
}

// load main context menu options
function loadMainOptions() {
    var html = '<ul class="context-menu-items">';
    html += '<li class="context-menu-item"><a id="createdirectory" class="context-menu-link">Create Directory</a></li>';
    html += '<li class="context-menu-item"><a id="createfile" class="context-menu-link">Create File</a></li><hr>';
    html += '<li class="context-menu-item"><a id="paste" class="context-menu-link">Paste </a></li></ul>';
    $('.context-menu').html(html);
}

// load file or folder context menu options
function loadOptions() {
    var html = '<ul class="context-menu-items">';
    html += '<li class="context-menu-item"><a id="cut" class="context-menu-link">Cut</a></li>';
    html += '<li class="context-menu-item"><a id="copy" class="context-menu-link">Copy</a></li>';
    html += '<li class="context-menu-item"><a id="delete" class="context-menu-link">Delete</a></li>';
    html += '<li class="context-menu-item"><a id="rename" class="context-menu-link">Rename</a></li></ul>';
    $('.context-menu').html(html);
}

// creates a new directory
function createDirectory(dir, dirname, children) {
    var data = getData(getCurrentDirectory());
    if (!data) {
        data = new Array();
    }
    if (dirname) {
        var newdir = new Object();
        newdir.name = dirname;
        newdir.type = "directory";
        newdir.children = new Array();
        if (children) {
            newdir.children = children;
        }
        data.push(newdir);
    }
    setData(getCurrentDirectory(), data);
    loadSidebar("", "tree");
    render();
}

// Creates a new file in current directory
function createFile(filename) {
    var ext = filename.split('.').pop();
    if (ext != 'doc' && ext != 'jpg' && ext != 'jpeg') {
        alert("Invalid extension (should be .jpeg, .jpg or .doc)");
        return;
    }
    var data = getData(getCurrentDirectory());
    if (!data) {
        data = new Array();
    }
    if (filename) {
        var newfile = new Object();
        newfile.name = filename;
        newfile.type = "file";
        data.push(newfile);
    }
    setData(getCurrentDirectory(), data);
    loadSidebar("", "tree");
    render();
}

// move the file or folder either by cut and copy
function move(dir, type, q) {
    var temp = new Object();
    var array = dir.split('/');
    temp.name = array[array.length - 1];
    temp.q = q;
    temp.type = type;
    temp.path = dir;
    if (type == "folder") {
        temp.data = getData(dir);
    }
    localStorage.setItem('temp', JSON.stringify(temp));
}

// paste the file or folder and removes the data from previous source if option is cut
function paste(dir) {
    if (localStorage.getItem('temp')) {
        var temp = JSON.parse(localStorage.getItem('temp'));
        if (temp.type == 'folder') {
            createDirectory(getCurrentDirectory(), temp.name, temp.data);
            if (temp.q == "cut") {
                var array = temp.path.split('/');
                array.splice(-1, 1);
                temp.path = array.join('/');
                removeData(temp.path, temp.name);
                localStorage.setItem('temp', "");
            }
        }
        else {
            createFile(temp.name);
            if (temp.q == "cut") {
                var array = temp.path.split('/');
                array.splice(-1, 1);
                temp.path = array.join('/');
                removeData(temp.path, temp.name);
                localStorage.setItem('temp', "");
            }
        }
        loadSidebar("", "tree");
        render(getCurrentDirectory());
    }
}

// Removes the file or folder
function removeData(dir, oldname) {
    var data = getData(dir);
    if (!data) {
        data = new Array();
    }
    for (var i = 0; i < data.length; i++) {
        if (data[i].name == oldname) {
            break;
        }
    }
    data.splice(i, 1);
    setData(dir, data);
    loadSidebar("", "tree");
}

// Rename file or folder
function rename(oldname, newname) {
    var data = getData(getCurrentDirectory());
    for (var i = 0; i < data.length; i++) {
        if (data[i].name == oldname) {
            data[i].name = newname;
        }
    }
    setData(getCurrentDirectory(), data);
    loadSidebar("", "tree");
}

// Opens the folder
function openFolder(name) {
    data = getData(getCurrentDirectory());
    for (var i = 0; i < data.length; i++) {
        if (data[i].name == oldname && data[i].type == "directory") {
            if (getCurrentDirectory()) {
                currentDirectory = getCurrentDirectory() + '/' + data[i].name;
            }
            else {
                currentDirectory = '/' + data[i].name;
            }
            localStorage.setItem('current', currentDirectory);
            render();
            break;
        }
    }
}

// Gets the position of click so that the context menu can be shown properly
function getPosition(e) {
    var posx = 0;
    var posy = 0;
    if (!e) var e = window.event;
    if (e.pageX || e.pageY) {
        posx = e.pageX;
        posy = e.pageY;
    } else if (e.clientX || e.clientY) {
        posx = e.clientX + document.body.scrollLeft +
            document.documentElement.scrollLeft;
        posy = e.clientY + document.body.scrollTop +
            document.documentElement.scrollTop;
    }
    return {
        x: posx,
        y: posy
    }
}
