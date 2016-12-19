#include <bits/stdc++.h>
using namespace std;
//Converts from a decimal number n to a number in base b (2<=b<=10)
long long int fromDecimal(long long int n, long long int b){
    long long int result = 0;
    long long int multiplier = 1;
    while(n>0){
        result+=n%b*multiplier;
        multiplier*=10;
        n/=b;
    }
    return result;
}
int main()
{
    for(long long int i=0;i<100;i++){
        long long int a = rand() % 100;
        cout<<a<<": "<<fromDecimal(a, 4)<<endl;
    }
    return 0;
}
