#include <bits/stdc++.h>
using namespace std;
long long int t, i, a, b, j;
string s;
int main()
{
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        a=0;
        b=0;
        for(j=0;j<s.length();j++){
            if(s[j]=='1'){
                a++;
            }
            else {
                b++;
            }
        }
        //cout<<a<<" "<<b<<endl;
        if(a==1 || b==1){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
