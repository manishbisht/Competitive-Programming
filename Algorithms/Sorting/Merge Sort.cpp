#include <bits/stdc++.h>
using namespace std;
void generateArray(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        a[i] = rand() % 100;
    }
}
void mmerge(int a[], int p, int q, int r){
    int i, j, k, c[r-p+1];
    i = p;
    j = q + 1;
    k = 0;
    while(i <= q && j <= r){
        if(a[i] <= a[j]){
            c[k] = a[i];
            i++;
        }
        else {
            c[k] = a[j];
            j++;
        }
        k++;
    }
    while(i <= q){
        c[k] = a[i];
        i++;
        k++;
    }
    while(j <= r){
        c[k] = a[j];
        j++;
        k++;
    }
    j = 0;
    for(i = p; i <= r; i++){
        a[i] = c[j];
        j++;
    }
}
void msort(int a[], int m, int n){
    if(m < n){
        msort(a, m, (m + n) / 2);
        msort(a, ((m + n) / 2) + 1, n);
        mmerge(a, m, (m + n) / 2, n);
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
    msort(a, 0, n-1);
    cout<<endl;
    for(i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
