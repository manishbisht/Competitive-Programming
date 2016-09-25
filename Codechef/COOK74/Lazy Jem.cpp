#include <bits/stdc++.h>
using namespace std;
long long int t, n, i, j, b, m, ans;
string s;
int main()
{
    cin>>t;
    for(i=0;i<t;i++){
        ans=0;
        cin>>n>>b>>m;
        while(n>1){
            if(n%2==0){
                ans=ans+((n/2)*m);
            }
            else {
                ans=ans+(((n+1)/2)*m);
            }
            n=n/2;
            m=m*2;
            ans=ans+b;
            //cout<<ans<<endl;
        }
        ans=ans+m;
        cout<<ans<<endl;
    }
    return 0;
}
