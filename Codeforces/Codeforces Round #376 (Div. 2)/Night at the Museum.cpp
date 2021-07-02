#include <bits/stdc++.h>
using namespace std;
long long int t, i, j, t1, t2, ans;
string s;
int main()
{
    cin>>s;
    ans=0;
    for(j=0;j<s.length();j++){
        if(j==0){
            t1=s[j]-'a';
            t2='a'-s[j]+26;
        }
        else if(s[j-1]>s[j]){
            t1=s[j-1]-s[j];
            t2=s[j]-s[j-1]+26;
        }
        else {
            t1=s[j-1]-s[j]+26;
            t2=s[j]-s[j-1];
        }
        if(t1<t2){
            ans=ans+t1;
        }
        else {
            ans=ans+t2;
        }
        //cout<<t1<<" "<<t2<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
