#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i;
    string s;
    char c = 'a';
    cin>>s;
    for(i = 0; i < s.length(); ++i){
        if(s[i] == c){
            c++;
        }
        else if(s[i] > c){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
