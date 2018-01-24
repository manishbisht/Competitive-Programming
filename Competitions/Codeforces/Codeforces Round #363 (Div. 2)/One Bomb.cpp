#include <bits/stdc++.h>
using namespace std;
long long int n, i;
vector<int> v, u;
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
        cin>>v[i];
	}
	sort(v.begin(), v.end());
	for(i=0;i<(n/2);i++){
        cout<<v[i]<<endl;
	}
    return 0;
}
