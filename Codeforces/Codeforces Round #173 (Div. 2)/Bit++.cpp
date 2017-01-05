#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, ans;
    string s;
    cin>>n;
    ans = 0;
    for(i = 0; i < n; i++){
        cin>>s;
        if(s[1]=='+'){
            ans++;
        }
        else {
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}
