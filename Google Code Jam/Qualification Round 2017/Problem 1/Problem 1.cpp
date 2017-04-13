#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("A-large.in", "r", stdin);
	freopen("output.out", "w", stdout);
    long long int t, n, i, j, k, ans;
    string s;
    cin>>t;
    for(i = 0; i < t; ++i){
        ans = 0;
        cout<<"Case #"<<i+1<<": ";
        cin>>s>>n;
        for(j = 0; j < s.length()-n+1; ++j){
            if(s[j] == '-'){
                for(k = j; k < j+n; ++k){
                    if(s[k] == '+'){
                        s[k] = '-';
                    }
                    else {
                        s[k] = '+';
                    }
                }
                ans++;
            }
        }
        if(s.find('-') != std::string::npos){
            cout<<"IMPOSSIBLE"<<endl;
        }
        else {
            cout<<ans<<endl;
        }
    }
    return 0;
}
