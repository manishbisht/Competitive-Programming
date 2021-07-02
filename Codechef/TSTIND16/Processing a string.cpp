#include <bits/stdc++.h>
using namespace std;
long long int t, i, j, sum;
string s;
int main()
{
    cin>>t;
    for(i=0;i<t;i++){
        sum=0;
        cin>>s;
        for(j=0;j<s.length();j++){
            if(s[j]>48 && s[j]<58){
                sum=sum+s[j]-48;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
