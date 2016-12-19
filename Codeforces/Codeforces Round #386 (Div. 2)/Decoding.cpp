#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, t;
    string s, c="";
    cin>>n>>s;
    if(n%2==0){
        t = 0;
    }
    else {
        t = 1;
    }
    c.push_back(s[0]);
    for(i=1;i<s.length();i++){
        if(t%2==0){
            c.push_back(s[i]);
        }
        else {
            c.insert(c.begin(), s[i]);
        }
        t++;
    }
    for(i=0;i<c.size();i++)
        cout<<c[i];
    return 0;
}
