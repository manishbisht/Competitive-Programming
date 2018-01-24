#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, a, b, i, j;
    string s;
    cin>>n>>a>>b>>s;
    if(s[a-1]==s[b-1]){
        cout<<"0"<<endl;
    }
    else {
        cout<<"1"<<endl;
    }
    return 0;
}
