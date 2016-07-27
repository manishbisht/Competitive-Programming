#include <bits/stdc++.h>
using namespace std;
long long int n, i, temp;
vector<pair<int, int> > v;
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
        cin>>temp;
        v.push_back(make_pair(temp, i+1));
	}
	sort(v.begin(), v.end());
	for(i=0;i<n/2;i++){
        cout<<v[i].second<<" "<<v[n-1-i].second<<endl;
	}
    return 0;
}
