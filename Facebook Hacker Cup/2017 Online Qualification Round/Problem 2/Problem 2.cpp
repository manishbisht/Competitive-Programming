#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("lazy_loading.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    long long int t, n, i, j, ans, m, a;
    vector<int> v;
    cin>>t;
    for(i = 0; i < t; i++){
        cout<<"Case #"<<i+1<<": ";
        cin>>n;
        v.clear();
        ans = 0;
        for(j = 0; j < n; j++){
            cin>>a;
            if(a >= 50){
                ans++;
            }
            else {
                v.push_back(a);
            }
        }
        sort(v.rbegin(), v.rend());
        while(v.size()>0){
            a = v[0];
            m = 50 / a;
            if(50 % a != 0){
                m++;
            }
            for(j = 0; j <= m && v.size() > 0; j++){
                v.pop_back();
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
