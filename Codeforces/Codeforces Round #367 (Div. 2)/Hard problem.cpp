#include <bits/stdc++.h>
using namespace std;
long long int n, a[100005], i, ans;
string s[100005];
int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    ans=0;
    for(i=1;i<n;i++){
        if(s[i-1].compare(s[i])>0){
            reverse(s[i-1].begin(), s[i-1].end());
            if(s[i-1].compare(s[i])<=0){
                if(a[i-1]<a[i]){
                    ans=ans+a[i-1];
                }
                else {
                    ans=ans+a[i];
                }
            }
            else {
                ans=-1;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
