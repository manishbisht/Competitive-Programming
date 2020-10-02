const arr = { RR: 'R', BB: 'B', GG: 'G', BG: 'R', BR: 'G', GB: 'R', GR: 'B', RB: 'G', RG: 'B' };

function triangle(r) {
    while (r.length > 1) {
        let n = '',
            c = 1;
        while (r.length % (3 * c) == 1) c *= 3;
        for (let i = 0; i < r.length - 1; i += c) n += arr[r[i] + r[i + c]];
        r = n;
    }
    return r;
}
