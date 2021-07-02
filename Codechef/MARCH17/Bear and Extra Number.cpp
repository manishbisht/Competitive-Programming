#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, i, j;
    cin>>t;
    for(i = 0; i < t; ++i){
        cin>>n;
        vector<long long int> v(n);
        for(j = 0; j < n; ++j){
            cin>>v[j];
        }
        sort(v.begin(), v.end());
        for(j = 0; j < n-3; ++j){
            if(v[j] + 1 != v[j+1] && v[j] + 2 != v[j+2]){
                cout<<v[j]<<endl;
                break;
            }
            else if(v[j] + 1 != v[j+1] && v[j+1] + 1 != v[j+2]){
                cout<<v[j+1]<<endl;
                break;
            }
            else if(v[j] + 2 != v[j+2] && v[j+1] + 1 != v[j+2]){
                cout<<v[j+2]<<endl;
                break;
            }
        }
    }
    return 0;
}
