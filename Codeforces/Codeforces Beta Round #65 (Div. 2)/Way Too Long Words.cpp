#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i;
    string s;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        if(s.length()>10){
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
        else {
            cout<<s<<endl;
        }
    }
    return 0;
}
