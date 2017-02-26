#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin>>a>>b;
    a = a % 3;
    if(a <= b){
        cout<<b-a<<endl;
    }
    return 0;
}
