#include <bits/stdc++.h>
using namespace std;
long long int fab[100];
void fabonacci(long long int n){
    fab[0]=0;
    fab[1]=1;
    for(long long int i=2;i<n;i++){
        fab[i] = fab[i-1] + fab[i-2];
    }
}
int main()
{
    for(long long int i=0;i<100;i++){
        fab[i]=-1;
    }
    fabonacci(100);
    for(long long int i=1;i<=10;i++){
        long long int a = rand() % 10;
        cout<<a<<": "<<fab[a]<<endl;
    }
    return 0;
}
