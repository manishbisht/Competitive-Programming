#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, n, i, j, ans;
	cin>>n;
	while(n!=0){
        ans = 0;
        for(j=0;j<n;j++){
            ans = ans + ((n-j)*(n-j));
        }
        cout<<ans<<endl;
        cin>>n;
	}
    return 0;
}
