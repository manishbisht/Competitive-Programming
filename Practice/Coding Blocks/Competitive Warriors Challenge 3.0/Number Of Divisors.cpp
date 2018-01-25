#include <bits/stdc++.h>
using namespace std;
const int N = 1000002;
int n, sieve[N], prime_fac[N], cnt[N];
int main(){
    for(int i=2;i<=1000*1000;i++)
    	if(sieve[i] == 0){
    		for(int j=i;j<=1000*1000;j+=i){
    			sieve[j] = 1;
    			if(prime_fac[j] == 0)
    			    prime_fac[j] = i;
    		}
    	}
    int t;
    cin>>t;
    while(t--){
    	cin>>n;
    	memset(cnt, 0, sizeof(cnt));
    	while(n--){
    		int val;
    		cin>>val;
    		while(val > 1){
    			cnt[prime_fac[val]]++;
    			val /= prime_fac[val];
    		}
    	}
    	int ans = 1;
    	for(int i=1;i<=1000*1000;i++)
    	    if(cnt[i] > 0){
    	        ans *= cnt[i] + 1;
    	    }
    	cout<<ans<<endl;
    }
    return 0;
}
