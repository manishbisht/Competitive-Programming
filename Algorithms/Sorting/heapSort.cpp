
// max heap inplementation using arrays without using dynamic resizing.

// best case = worst case = avg case = o(nlogn);

#include<iostream>

#define maxsize 100

using namespace std;

// helper methods

void swap(int *a, int *b){

	int temp = *a;
	*a = *b;
	*b = temp;

}

// function to max_heapify the given array
void max_heapify(int a[], int n, int i){

	int max = i;
	int l = 2 * i + 1; 
	int r = 2 * i + 2;

	if(l < n && a[l] > a[max]){
	    max = l;
	}
	if(r < n && a[r] > a[max]){
	    max = r;
	}
	 
	if(max != i){
	    swap(&a[i], &a[max]);
	    max_heapify(a, n, max);
	}
	   
   
}


// delete min element and return it

int heapSort(int a[], int n){

	for (int i = n/2 - 1; i >= 0; i--){

		max_heapify(a, n, i);

	}

	for (int i = n - 1; i >= 0; i--){

		swap(&a[0], &a[i]);

		max_heapify(a, i, 0);

	}
	  
	   
	for (int i = 0; i < n; i++){

		cout << a[i] << endl;

	}

}

int main(){

   	int n, el;

   	cout << "Enter the size of the array: " << endl;
   	cin >> n;
    
    int a[n];

   	cout << "Enter the elements" << endl;  
   
   	for (int i = 0; i < n; i++) {
   	   
   		cin >> a[i];

   	}

   	cout << endl;

	// heapsort

	cout << "The sorted elements are: " << endl;

	heapSort(a, n);  

	return 0;

}