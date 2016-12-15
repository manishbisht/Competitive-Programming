#include <bits/stdc++.h>
using namespace std;
//Converts a number n in base b (2<=b<=10) to a decimal number
long long int toDecimal(long long int n, long long int b){
    long long int result = 0;
    long long int multiplier = 1;
    while(n>0){
        result+=n%10*multiplier;
        multiplier*=b;
        n/=10;
    }
    return result;
}
int main()
{
    for(long long int i=0;i<100;i++){
        long long int a = rand() % 100;
        cout<<a<<": "<<toDecimal(a, 4)<<endl;
    }
    return 0;
}
