#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, ans;
    string s, a, b, temp;
    cin>>t;
    cin>>s;
    ans = 0;
    for(i = 0; i < t; ++i){
        cin>>temp;
        a = "";
        a.push_back(temp[0]);
        a.push_back(temp[1]);
        a.push_back(temp[2]);
        b = "";
        b.push_back(temp[5]);
        b.push_back(temp[6]);
        b.push_back(temp[7]);
        if(a == s){
            ans++;
        }
        if(b == s){
            ans--;
        }
    }
    if(ans){
        cout<<"contest"<<endl;
    }
    else {
        cout<<"home"<<endl;
    }
    return 0;
}
