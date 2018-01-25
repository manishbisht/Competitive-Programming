#include <bits/stdc++.h>
using namespace std;
int c(int n){
    int ans = 1, i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            ans++;
        }
    }
    return ans;
}
int main()
{
	long long int n, i, j, ans;
	cin>>n;
	ans = 0;
	for(j=0;j<n;j++){
        ans = ans + c(j+1);
	}
	cout<<ans<<endl;
    return 0;
}
