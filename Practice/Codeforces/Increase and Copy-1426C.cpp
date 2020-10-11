//Problem Link : http://codeforces.com/problemset/problem/1426/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,c=0;
		cin>>n;
		ll m = sqrt(n);
		c=m-1;
	    if(n%m==0)
	    cout<<c+(n/m)-1<<endl;
	    else
	    cout<<c+(n/m)<<endl;
}
return 0;
}
