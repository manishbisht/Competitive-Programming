from __future__ import print_function
class Node:
	def __init__(self, data):
		self.data = data
		self.next = None

class LinkedList:
	def __init__(self):
		self.head = None

	def append(self, data):
		newNode = Node(data)
		if self.head is None:
			self.head = newNode
		else:
			start = self.head
			while start.next is not None:
				start = start.next
			start.next = newNode

	def appendleft(self, data):
		newNode = Node(data)
		temp = self.head
		self.head = newNode
		newNode.next = temp
	
	def printList(self):
		start = self.head
		while start is not None:
			print(str(start.data) + "->", end="")
			start = start.next
	def size(self):
		start = self.head
		count = 0
		while start is not None:
			count = count + 1
			start = start.next
		return count

print("Enter Size of linkedlist: ", end="")
n = int(raw_input())
ll = LinkedList()
for i in xrange(0, n):
	print("Enter " + str(i+1) + " Value: ", end="") 
	d = int(raw_input())
	ll.appendleft(d)

ll.printList()
print("\n"+str(ll.size()))
