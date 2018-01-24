#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, a, b;
    string s;
    cin>>s;
    a = 0;
    b = 0;
    for(i = 0; i < s.length(); i++){
        if(s[i]=='0'){
            a++;
        }
        else{
            b++;
        }
        if(s[i]!=s[i-1]){
            a = 1;
            b = 1;
        }
        if(a >=7 || b >= 7){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
