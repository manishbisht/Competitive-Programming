#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int> v;
    long long int n, i;
    cin>>n;
    v.resize(n);
    for(i = 0; i < n; ++i){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(i = 1; i < n - 1; ++i){
        if(v[i-1]+v[i]>v[i+1]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
