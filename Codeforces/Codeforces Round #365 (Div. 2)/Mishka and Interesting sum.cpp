#include <bits/stdc++.h>
using namespace std;
long long int n, a[1000005], i, q, l, r, j, temp, ans, k;
vector<pair<long long int, long long int> > v;
vector<long long int> tt;
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
        cin>>a[i];
	}
	cin>>q;
	for(i=0;i<q;i++){
        cin>>l>>r;
        v.clear();
        l--;
        r--;
        tt.clear();
        for(j=l;j<=r;j++){
            tt.push_back(a[j]);
        }
        ans=tt[0];
        for(j=1;j<tt.size();j++){
            ans=ans^tt[j];
        }
        std::vector<long long int>::iterator it;
        it = std::unique (tt.begin(), tt.end());
        for (it=tt.begin(); it!=tt.end(); ++it){
            ans=ans^(*it);
        }
        /*for(j=0;j<v.size();j++){
            cout<<v[j].first<<" "<<v[j].second<<endl;
        }*/
        /*ans=0;
        for(j=0;j<v.size();j++){
            if(v[j].second%2==0){
                ans=v[j].first;
                break;
            }
        }
        for(j=j+1;j<v.size();j++){
            if(v[j].second%2==0){
                ans=ans^v[j].first;
            }
        }*/
        cout<<ans<<endl;
        //cout<<1 ^ 0<<endl;*/
	}
    return 0;
}
