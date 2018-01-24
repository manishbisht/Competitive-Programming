#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin>>a>>b;
    if((abs(a-b) == 1 || a == b) && b > 0){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
