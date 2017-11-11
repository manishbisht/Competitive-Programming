#include <bits/stdc++.h>
 
using namespace std;
const int N = 1000002;
int n, sieve[N], prime_fac[N], cnt[N];
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=2;i<=1000*1000;i++)
    	if(sieve[i] == 0){
    		for(int j=i;j<=1000*1000;j+=i){
    			sieve[j] = 1;
    			if(prime_fac[j] == 0)	prime_fac[j] = i;
    		}
    	}
    int t;
    cin>>t;
    assert(t >= 1 && t <= 20);
    while(t--){
    	cin>>n;
    	assert(n >= 1 && n <= 10000);
    	memset(cnt, 0, sizeof(cnt));
    	while(n--){
    		int val;
    		cin>>val;
    		assert(val >= 1 && val <= 1000*1000);
    		while(val > 1){
    			cnt[prime_fac[val]]++;
    			val /= prime_fac[val];
    		}
    	}
    	int xorval = 0;
    	for(int i=1;i<=1000*1000;i++)
    		xorval ^= cnt[i];
    	if(xorval > 0)	cout<<"Mancunian"<<endl;
    	else	cout<<"Liverbird"<<endl;
    }
    return 0;
}
