#include <bits/stdc++.h>
using namespace std;
long long int n, m, a[500005], i, j, b[500005], k, ans;
int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<m;i++){
        cin>>b[i];
        b[i]=b[i]-1;
    }
    ans=0;
    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<m;j++){
            b[j]=b[j]+1;
            b[j]=b[j]%n;
            if(a[b[j]]==1){
                k++;
            }
            //cout<<a[b[j]-1]<<" ";
        }
        //cout<<endl;
        if(k==m){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
