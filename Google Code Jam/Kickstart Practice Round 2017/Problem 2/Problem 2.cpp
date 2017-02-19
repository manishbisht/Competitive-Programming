#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("B-large.in", "r", stdin);
	freopen("output2.out", "w", stdout);
    long long int t, i;
    long double n, m;
    cin>>t;
    for(i = 0; i < t; ++i){
        cout<<"Case #"<<i+1<<": ";
        cin>>n>>m;
        cout<<fixed<<setprecision(8)<<(n-m)/(n+m)<<endl;
    }
    return 0;
}
