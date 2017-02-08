#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, t, i;
    vector<long long int> v;
    cin>>n;
    for(i = 0; i < n; ++i){
        cin>>t;
        v.push_back(t);
    }
    for(i = 0; i < n/2; ++i){
        if(i % 2 == 0){
            cout<<v[n-1-i]<<" ";
        }
        else {
            cout<<v[i]<<" ";
        }
    }
    if(n % 2 == 0){
        for(; i < n; ++i){
            if(i % 2 == 0){
                cout<<v[i]<<" ";
            }
            else {
                cout<<v[n-i-1]<<" ";
            }
        }
    }
    else {
        for(; i < n; ++i){
            if(i % 2 == 0){
                cout<<v[n-i-1]<<" ";
            }
            else {
                cout<<v[i]<<" ";
            }
        }
    }
    return 0;
}
