t = int(raw_input())
for i in xrange(t):
    n = int(raw_input())
    arr = []
    dep = []
    for j in xrange(n):
        data = [int(k) for k in raw_input().split(" ")]
        arr.append(data[0])
        dep.append(data[1])
    arr.sort()
    dep.sort()
    ans = 0
    need = 0
    j = 0
    k = 0
    while j < n and k < n:
        if arr[j] < dep[k]:
            need += 1
            j += 1
            if need > ans:
                ans = need
        else:
            need -= 1
            k += 1
    print ans