#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, j, n, a[50], b[500], c[50], ans, temp;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>c[j];
        }
        for(j=0;j<n-1;j++){
            cin>>a[j];
        }
        for(j=0;j<n-1;j++){
            cin>>b[j];
        }
        ans = c[0];
        temp = ans;
        for(j=0;j<n-1;j++){
            temp = temp + c[j+1] - (a[j]*b[j]);
            if(temp>ans){
                ans = temp;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
