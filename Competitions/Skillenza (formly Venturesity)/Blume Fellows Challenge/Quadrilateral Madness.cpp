#include <bits/stdc++.h>
using namespace std;
long long int GCDEuclid(long long int a, long long int b){
    if(b==0)
        return a;
    return GCDEuclid(b, a%b);
}
int main()
{
    long long int t, n, i, j, k, a, b, c, d, z;
    vector<long long int> v;
    cin>>t;
    for(i = 0; i < t; ++i){
        cin>>n;
        v.resize(n);
        for(j = 0; j < n; ++j){
            cin>>v[j];
        }
        sort(v.begin(), v.end());
        j = 0;
        k = 0;
        for(a = 0; a < n-3; ++a){
            for(b = a+1; b < n-2; ++b){
                for(c = b+1; c < n-1; ++c){
                    z = max(v[a] - v[b] - v[c], max(v[b] - v[a] - v[c], v[c] - v[a] - v[b]));
                    z = lower_bound(v.begin()+c+1, v.end(), z+1)-v.begin();
                    d = upper_bound(v.begin()+c+1, v.end(), v[a]+v[b]+v[c]-1)-v.begin();
                    if(d > z){
                        k += d-z;
                    }
                    j += n-c-1;
                }
            }
        }
        z = GCDEuclid(k, j);
        k = k / z;
        j = j / z;
        cout<<k<<"/"<<j<<endl;
    }
    return 0;
}
