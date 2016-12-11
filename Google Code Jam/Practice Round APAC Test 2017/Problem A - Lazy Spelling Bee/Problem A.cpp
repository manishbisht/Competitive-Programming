#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("A-large-practice.in", "r", stdin);
	freopen("output.txt", "w", stdout);
    long long int n, i , j, ans, c;
    string s;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        ans = 1;
        if(s.length()==1){
            ans = 1;
        }
        else if(s.length()==2){
            if(s[0]==s[1]){
                ans = 1;
            }
            else {
                ans = 4;
            }
        }
        else {
            if(s[1]!=s[0]){
                ans = ans * 2;
                ans = ans % 1000000007;
            }
            for(j=1;j<s.length()-1;j++){
                if(s[j]==s[j-1] && s[j]==s[j+1] && s[j-1]==s[j+1]){
                    ans = ans * 1;
                }
                else if(s[j]==s[j-1] || s[j]==s[j+1] || s[j-1]==s[j+1]){
                    ans = ans * 2;
                }
                else {
                    ans = ans * 3;
                }
                ans = ans % 1000000007;
            }
            if(s[j]!=s[j-1]){
                ans = ans * 2;
                ans = ans % 1000000007;
            }
        }
        cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
    return 0;
}
