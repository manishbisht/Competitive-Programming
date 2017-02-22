#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, ans, a, b;
    vector<long long int> v;
    cin>>n;
    v.resize(n);
    for(i = 0; i < n; ++i){
        cin>>v[i];
    }
    a = *max_element(v.begin(), v.end());
    b = *min_element(v.begin(), v.end());
    ans = 0;
    for(i = 0; i < n; ++i){
        if(v[i] < a && v[i] > b){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
