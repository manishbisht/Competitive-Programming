#include <bits/stdc++.h>
using namespace std;
long long int countOnes(long long int n){
    long long int c=0;
    while(n>0){
        n = n & (n-1);
        c++;
    }
    return c;
}
int main()
{
    for(long long int i=1;i<=10;i++){
        long long int a = rand() % 100;
        cout<<a<<": "<<countOnes(a)<<endl;
    }
    return 0;
}
