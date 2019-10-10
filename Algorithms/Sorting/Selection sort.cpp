#include <bits/stdc++.h>
using namespace std;
void generateArray(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        a[i] = rand() % 100;
    }
}
void sSort(int a[], int n){
    int i, j, temp, loc, min;
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
 
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
}
int main()
{
    int i, n, a[100];
    cin>>n;
    generateArray(a, n);
    cout<<"Original Array: ";
    for(i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    sSort(a, n);
    cout<<"\nFinal Array: ";
    for(i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
