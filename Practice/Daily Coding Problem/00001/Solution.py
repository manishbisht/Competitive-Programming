# Brute Force: O(n ** 2)
def get_pair(data, k):
    for i in xrange(len(data)):
        for j in xrange(i + 1, len(data)):
            if data[i] + data[j] == k:
                return data[i], data[j]
    return "NA"


# Sorting: O(nlogn)
def get_pair_sorting(data, k):
    data.sort()
    l = 0
    r = len(data) - 1
    while l < r:
        if data[l] + data[r] == k:
            return data[l], data[r]
        elif data[l] + data[r] < k:
            l += 1
        else:
            r -= 1
    return "NA"


# Map: O(n)
def get_pair_map(data, k):
    check = {}
    for i in data:
        temp = k - i
        if temp in check:
            return i, temp
        check[i] = 1
    return "NA"


print get_pair([10, 15, 3, 7], 17)
print get_pair_sorting([10, 15, 3, 7], 17)
print get_pair_map([10, 15, 3, 7], 17)
