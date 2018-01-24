#include <bits/stdc++.h>
using namespace std;
bool compare(const pair<long long int, int>&a, const pair<long long int, long long int>&b){
    return a.first-a.second < b.first-b.second;
}
int main()
{
    long long int n, k, i, ans;
    vector< pair<long long int, long long int> > v(200005);
    cin>>n>>k;
    for(i = 0; i < n; ++i){
        cin>>v[i].first;
    }
    for(i = 0; i < n; ++i){
        cin>>v[i].second;
    }
    sort(v.begin(), v.begin()+n, compare);
    ans = 0;
    for(i = 0; i < n; ++i){
        if(i < k || v[i].first < v[i].second){
            ans += v[i].first;
        }
        else {
            ans += v[i].second;
        }
    }
    cout<<ans<<endl;
    return 0;
}
