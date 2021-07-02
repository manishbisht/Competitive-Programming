#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k, i, ans, t;
    string s;
    cin>>s>>k;
    if(s == "0"){
        cout<<"0"<<endl;
        return 0;
    }
    else {
        ans = 0;
        t = 0;
        for(i = s.length() - 1; i >=0; --i){
            if(s[i] == '0'){
                t++;
            }
            else {
                ans++;
            }
            if(t == k){
                cout<<ans<<endl;
                return 0;
            }
        }
        if(t > 0){
            cout<<s.length()-1<<endl;
        }
    }
    return 0;
}
