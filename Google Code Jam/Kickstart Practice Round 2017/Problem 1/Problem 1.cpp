#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("A-large.in", "r", stdin);
	freopen("output2.out", "w", stdout);
    long long int t, n, i, j, k;
    string s;
    set<char> ss;
    vector<pair<long long int, string> > v;
    cin>>t;
    for(i=0;i<t;i++){
        v.clear();
        cout<<"Case #"<<i+1<<": ";
        cin>>n;
        getline(cin, s);
        for(j = 0; j < n; ++j){
            getline(cin, s);
            //cout<<s<<endl;
            ss.clear();
            for(k = 0; k < s.length(); ++k){
                ss.insert(s[k]);
            }
            v.push_back(make_pair(ss.size(), s));
        }
        sort(v.rbegin(), v.rend());
        for(j = 0; j < v.size() - 1; ++j){
            if(v[j].first != v[j+1].first){
                break;
            }
            //cout<<v[j].first<<" "<<v[j].second<<endl;
        }
        cout<<v[j].second<<endl;
    }
    return 0;
}
