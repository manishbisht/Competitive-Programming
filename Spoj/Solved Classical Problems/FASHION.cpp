#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, n, i, j, ans, a[1000], b[1000];
	cin>>t;
	for(i=0;i<t;i++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        for(j=0;j<n;j++){
            cin>>b[j];
        }
        sort(a, a+n);
        sort(b, b+n);
        ans=0;
        for(j=0;j<n;j++){
            ans=ans+(a[j]*b[j]);
        }
        cout<<ans<<endl;
	}
    return 0;
}
