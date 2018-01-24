#include <bits/stdc++.h>
using namespace std;
long long int i;
string s, ans;
int main()
{
    cin>>s;
    ans="";
    for(i=0;i<s.length();i++){
        if(s[i]=='0'){
            ans=ans+"0";
        }
        else if(s[i]=='1'){
            ans=ans+"1";
        }
        else if(s[i]=='B' && ans.length()>0){
            ans.erase(ans.end()-1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
