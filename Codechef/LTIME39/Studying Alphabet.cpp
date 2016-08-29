#include <bits/stdc++.h>
using namespace std;
long long int t, i, c, a[26], j;
string s;
int main()
{
    cin>>s;
    for(i=0;i<26;i++){
        a[i]=0;
    }
    for(i=0;i<s.length();i++){
        a[s[i]-97]=1;
    }
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        c=0;
        for(j=0;j<s.length();j++){
            if(a[s[j]-97]==1){
                c++;
            }
            else {
                break;
            }
        }
        //cout<<c<<endl;
        if(c==s.length()){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
