#include <bits/stdc++.h>
using namespace std;
long long int fab[100];
long long int fabonacci(long long int n){
    if(fab[n]==-1){
        if(n<=1){
            fab[n]=n;
        }
        else {
            fab[n] = fabonacci(n-1) + fabonacci(n-2);
        }
    }
    return fab[n];
}
int main()
{
    for(long long int i=0;i<100;i++){
        fab[i]=-1;
    }
    for(long long int i=1;i<=10;i++){
        long long int a = rand() % 10;
        cout<<a<<": "<<fabonacci(a)<<endl;
    }
    return 0;
}
