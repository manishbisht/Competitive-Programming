#include <bits/stdc++.h>
using namespace std;
long long int t, i, j, l, temp;
string s;
int main()
{
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        temp=0;
        l=s.length();
        if(s.length()%2!=0){
            if(s[l/2]=='.'){
                s[l/2]='a';
            }
        }
        //cout<<s<<endl;
        for(j=0;j<s.length()/2;j++){
            if(s[j]=='.' && s[l-j-1]=='.'){
                s[j]='a';
                s[l-j-1]='a';
            }
            else if(s[j]=='.'){
                s[j]=s[l-j-1];
            }
            else if(s[l-j-1]=='.'){
                s[l-j-1]=s[j];
            }
            else if(s[j]!=s[l-j-1]){
                temp=1;
                break;
            }
            //cout<<s<<endl;
        }
        if(temp==1){
            cout<<"-1"<<endl;
        }
        else {
            cout<<s<<endl;
        }
    }
    return 0;
}
