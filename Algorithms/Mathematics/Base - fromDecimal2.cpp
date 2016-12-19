#include <bits/stdc++.h>
using namespace std;
//Convert from a decimal to any base (up to base 20)
string fromDecimal2(long long int n, long long int b){
    string c="0123456789ABCDEFGHHIJ";
    string result = "";
    while(n>0){
        result = c.at(n%b) + result;
        n/=b;
    }
    return result;
}
int main()
{
    for(long long int i=0;i<100;i++){
        long long int a = rand() % 100;
        cout<<a<<": "<<fromDecimal2(a, 4)<<endl;
    }
    return 0;
}
