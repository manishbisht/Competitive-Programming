#include <bits/stdc++.h>
#define INF (1<<29)
using namespace std;
int main()
{
    long long int i;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]>64 && s[i]<91){
            s[i]=s[i]+32;
        }
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'){
            s.erase(s.begin()+i);
            i--;
        }
        else {
            s.insert(s.begin()+i, '.');
            i++;
        }
    }
    cout<<s<<endl;
    return 0;
}
