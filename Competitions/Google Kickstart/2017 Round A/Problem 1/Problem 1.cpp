#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("A-large.in", "r", stdin);
	freopen("output1.out", "w", stdout);
    long long int t, n, m, i, ans, k;
    cin>>t;
    for(i=0;i<t;i++){
        cout<<"Case #"<<i+1<<": ";
        cin>>m>>n;
        ans = 0;
        m--;
        n--;
        k = 1;
        if(m > n){
            swap(m, n);
        }
        while(m > 0 && n > 0){
            ans += (m * n * k) % 1000000007;
            ans %= 1000000007;
            k++;
            m--;
            n--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
