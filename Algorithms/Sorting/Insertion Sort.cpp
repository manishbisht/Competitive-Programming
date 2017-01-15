#include <bits/stdc++.h>
using namespace std;
void generateArray(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        a[i] = rand() % 100;
    }
}
void iSort(int a[], int n){
    int i, j, temp;
    for(i = 1; i < n; i++){
        j = i;
        temp = a[i];
        while(j > 0 && temp < a[j-1]){
            a[j] = a[j-1];
            j--;
        }
        a[j] = temp;
    }
}
int main()
{
    int i, n, a[100];
    cout<<"Enter Size of Array: ";
    cin>>n;
    generateArray(a, n);
    for(i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    iSort(a, n);
    cout<<endl;
    for(i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
