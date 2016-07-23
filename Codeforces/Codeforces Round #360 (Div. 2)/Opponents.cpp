#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n, d, i, j, temp, c, ans;
string s;
int main()
{
    cin>>d>>n;
    c=0;
    ans=0;
    for(i=0;i<n;i++){
        cin>>s;
        temp=0;
        for(j=0;j<s.length();j++){
            if(s[j]=='1'){
                temp++;
            }
            else {
                break;
            }
        }
        if(temp==s.length()){
            c=0;
        }
        else {
            c++;
            if(ans<c){
                ans=c;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
