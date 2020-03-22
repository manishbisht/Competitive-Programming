t = int(raw_input().strip())
for i in xrange(1, t + 1):
    data = [int(j) for j in raw_input().strip().split()]
    n = data[0]
    p = data[1]
    x = [int(j) for j in raw_input().strip().split()]
    maximum_skill = max(x)
    minimum_skill = min(x)
    maximum_temp = []
    minimum_temp = []
    for value in x:
        maximum_temp.append(maximum_skill - value)
        minimum_temp.append(value - minimum_skill)
    maximum_temp.sort()
    minimum_temp.sort()
    maximum_ans = 0
    minimum_ans = 0
    for value in maximum_temp[:p]:
        maximum_ans += value
    for value in minimum_temp[:p + 1]:
        minimum_ans += value
    print("Case #{}: {} ".format(i, min(minimum_ans, maximum_ans)))
