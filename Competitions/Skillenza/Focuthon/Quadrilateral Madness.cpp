#include <bits/stdc++.h>
#define L long long int
using namespace std;
L G(L u, L v){
    while(v != 0){
        L t = v;
        v = u % v;
        u = t;
    }
    return u;
}
int main()
{
    L j, k;
    int t, n, i, a, b, c, d, z;
    vector<int> v(1000);
    cin>>t;
    for(i = 0; i < t; ++i){
        cin>>n;
        for(j = 0; j < n; ++j){
            cin>>v[j];
        }
        sort(v.begin(), v.begin()+n);
        j = 0;
        k = 0;
        for(a = 0; a < n-3; ++a){
            for(b = a+1; b < n-2; ++b){
                for(c = b+1; c < n-1; ++c){
                    z = max(v[a] - v[b] - v[c], max(v[b] - v[a] - v[c], v[c] - v[a] - v[b]));
                    z = lower_bound(v.begin()+c+1, v.begin()+n, z+1)-v.begin();
                    d = upper_bound(v.begin()+c+1, v.begin()+n, v[a]+v[b]+v[c]-1)-v.begin();
                    if(d > z){
                        k += d-z;
                    }
                    j += n-c-1;
                }
            }
        }
        z = G(k, j);
        k = k / z;
        j = j / z;
        cout<<k<<"/"<<j<<endl;
    }
    return 0;
}
