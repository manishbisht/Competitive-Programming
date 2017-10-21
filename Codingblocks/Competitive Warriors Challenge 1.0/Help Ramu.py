n = int(raw_input())
for i in xrange(n):
    cost = [int(j) for j in raw_input().split()]
    resource = [int(j) for j in raw_input().split()]
    rickshaws = [int(j) for j in raw_input().split()]
    cab = [int(j) for j in raw_input().split()]
    ans1 = 0
    for j in xrange(resource[0]):
        ans1 += min(cost[0] * rickshaws[j], cost[1])
    ans2 = 0
    for j in xrange(resource[1]):
        ans2 += min(cost[0] * cab[j], cost[1])
    ans1 = min(ans1, cost[2])
    ans2 = min(ans2, cost[2])
    print min(ans1 + ans2, cost[3])
