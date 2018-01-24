#include <bits/stdc++.h>
using namespace std;
long long int n, m, a, b, i, j;
set<int> v, u;
int main()
{
	cin>>n>>m;
	for(i=0;i<m;i++){
        cin>>a>>b;
        v.insert(a);
        u.insert(b);
        cout<<(n-v.size())*(n-u.size())<<" ";
	}
    return 0;
}
