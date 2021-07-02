// JavaScript Document
show();
showCompleted();
function getcolor()
{
	colours=["#F44336", "#E91E63", "#9C27B0", "#673AB7", "#3F51B5", "#2196F3", "#03A9F4", "#00BCD4", "#009688", "#4CAF50", "#8BC34A", "#CDDC39", "#FFEB3B", "#FFC107", "#FF9800", "#FF5722", "#795548"];
	var rand = colours[Math.floor(Math.random() * colours.length)];
	return rand;
}
function gettasks()
{
	var tasks=new Array();
	var task=localStorage.getItem("pending-tasks");
	if(task!==null)
	{
		tasks=JSON.parse(task);
	}
	return tasks;
}
function getCompletedTasks()
{
	var tasks=new Array();
	var task=localStorage.getItem("completed-tasks");
	if(task!==null)
	{
		tasks=JSON.parse(task);
	}
	return tasks;
}
function add()
{
	var task=document.getElementById("addtask").value;
	var tasks=gettasks();
	tasks.push(task);
	localStorage.setItem('pending-tasks', JSON.stringify(tasks));
	//alert(tasks);
}
function removeItem(tasks, task){
   for(var i in tasks){
      if(tasks[i]==task){
         tasks.splice(i,1);
         break;
      }
   }
}
function addCompletedTasks(data)
{
	var task=data;
	var tasks=gettasks();
	removeItem(tasks, task);
	localStorage.setItem('pending-tasks', JSON.stringify(tasks));
	var tasks=getCompletedTasks();
	tasks.push(task);
	localStorage.setItem('completed-tasks', JSON.stringify(tasks));
}
function allowDrop(ev) {
    ev.preventDefault();
}

function drag(ev) {
	ev.target.style.opacity = "1";
    ev.dataTransfer.setData("text", ev.target.textContent);
}

function drop(ev) {
    ev.preventDefault();
    var data = ev.dataTransfer.getData("text");
	data=data.slice(0, -1);
	addCompletedTasks(data);
	showCompleted();
	show();
}
function showCompleted()
{
	var tasks=getCompletedTasks();
	var html="";
	for(var i=0;i<tasks.length;i++)
	{
		html+='<div align="center" class="completed-tasks-button">'+tasks[i]+'</div>';
	}
	document.getElementById("completedtasks").innerHTML = html;
}
function show()
{
	var tasks=gettasks();
	var html="";
	j=0;
	for(var i=0;i<tasks.length;i++)
	{
		html+='<div align="center" class="pending-tasks-button" draggable="true" ondragstart="drag(event)" style="background:'+getcolor()+'">'+tasks[i]+'<div class="remove">X</div></div>';
		j++;
		if(j%2==0)
		{
			html+="<br>";
		}
	}
	document.getElementById("pendingtasks").innerHTML = html;
	var buttons = document.getElementsByClassName("remove");
    for (var i=0; i < buttons.length; i++) {
        buttons[i].addEventListener('click', remove);
    }
}
function remove()
{
	var id = this.getAttribute('id');
	var tasks=gettasks();
	tasks.splice(id, 1);
	localStorage.setItem("pending-tasks", JSON.stringify(tasks));
	show();
}