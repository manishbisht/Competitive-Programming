#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, i, j, ans;
    cin>>n>>k;
    ans = 0;
    for(i=1;i<=n;i++){
        if(k + (i*5)>240){
            break;
        }
        k = k + (i*5);
        ans++;
        //cout<<k<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
