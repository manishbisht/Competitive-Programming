#include<bits/stdc++.h>
using namespace std;
long long int dp[1001][1024];
int main() {
    int n, MASK=0, i, j;
	string x;
	int s[14];
	cin>>x;
	x = ' ' + x;
	cin>>n;
	for(i = 0; i < n; i++) {
	    cin>>s[i];
		MASK|=(1<<s[i]);
	}
	dp[0][0] = 1;
	for(i = 1; i<= x.length()-1; i++){
		dp[i][0] = 1;
		for(j=0;j<=1023;j++){
			dp[i][j|(1<<(x[i]-'0'))] += dp[i-1][j];
		}
	}
	long long int ans = 0;
	for(i = 1; i<= x.length()-1; i++){
		for(j=0;j<=1023;j++){
		    if((j&MASK)==MASK){
				ans = ans + dp[i][j];
			}
		}
	}
	cout<<ans;
	return 0;
}
