contacts = [['p1', 'e1'],['p2', 'e2'],['p2', 'e3'],['e3', 'p4'],['e2', 'p5'],['p3', 'e4', 'p6'],['e4'],['p6', 'e5']]
visited = [False]*len(contacts)
contacts = map(set, contacts)

def dfs(node,index, temp):
	visited[index] = True
	result = node
	for i,item in enumerate(contacts):
		if not visited[i] and not result.isdisjoint(item):
			temp.append('c'+str(i+1))
			result.update(dfs(item,i, temp))	
	return result

def merge_contacts():
	result = []
	ans = []
	for i,node in enumerate(contacts):
		if not visited[i]:
			temp = ['c'+str(i+1)]
			result.append(list(dfs(node,i, temp)))
			ans.append(temp)
			temp = []
	return ans
print merge_contacts()
