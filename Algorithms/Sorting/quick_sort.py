
# quicksort is a non stable sorting algorithm
# quicksort : average and best: o(nlogn). worst: o(n*n) when array is already sorted. 
# reasons why quicksort is better that merge sort in some cases:
# 1) its space complexity is better than merge sort since its space complexity is o(1) [considering stack space for recusrion worst case
#    is o(n), average is o(logn)] 
# 2) if a randomized version of quicksort is used, the worst case can be avoided by choosing random pivot
# 3) quicksort has better cache locality, i.e, better locality of reference. 

import random

def partition(a, l, h):
	
	i = l
	pivot = a[h]
	for j in range(l, h):
		if(a[j] <= pivot):
			a[i], a[j] = a[j], a[i]
			i += 1

	a[i], a[h] = a[h], a[i]
	return i					

# random partition function. generates a random number
# between high and low and swaps the last element with the randomly generated index
# eliminates the worst case for quick sort. since partitions are random, worst case (already sorted array) wont take O(n*n).
def random_partition(a, l, h):

	rand_index = random.randint(l, h)
	a[rand_index], a[h] = a[h], a[rand_index]
	return partition(a, l, h)


# main quicksort function
def quicksort(a, l, h):

	if(l < h):

		pivot = random_partition(a, l, h)

		quicksort(a, pivot + 1, h)
		quicksort(a, l, pivot - 1)
		

# driver function
if __name__ == '__main__':
	
	size = int(input('enter the size: '))
	
	a = list(map(int, input().split()))

	quicksort(a, 0, size - 1)	

	print(a)

