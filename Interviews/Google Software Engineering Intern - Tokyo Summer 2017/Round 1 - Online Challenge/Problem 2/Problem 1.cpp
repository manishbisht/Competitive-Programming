#include <bits/stdc++.h>
using namespace std;
bool compare(const vector<long long int>& a,const vector<long long int>& b) {
   return a.size() > b.size();
}
int main() {
    freopen("task2-test-input.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
    long long int t, n, i, j, m, a, b, k;
    vector< vector<long long int> > v(105);
    cin>>t;
    for(i = 0; i < t; ++i) {
        cout<<"Case #"<<i+1<<": ";
        for(j = 0; j < 105; ++j)
            v[j].clear();
        cin>>n>>m;

        for(j = 0; j < m; ++j) {
            cin>>a>>b;
            k = 0;
            while(find(v[k].begin(), v[k].end(), a)!=v[k].end() && find(v[k].begin(), v[k].end(), b)!=v[k].end()){
                k++;
            }
            v[k].push_back(a);
            v[k].push_back(b);
            sort(v[k].begin(), v[k].end());
        }
        if(m==0){
            for(j = 0; j < n; ++j){
                cout<<"1 ";
            }
        }
        else {
            sort(v.begin(),v.end(), compare);
            for(j = 0; v[j].size()!=0; ++j) {
                cout<<v[j].size()<<" ";
            }
        }
        /*cout<<endl;
        for(j=0;j<10;j++){
            for(k=0;k<v[j].size();k++){
                cout<<v[j][k]<<" ";
            }
            cout<<endl;
        }*/
        cout<<endl;
    }
    return 0;
}
