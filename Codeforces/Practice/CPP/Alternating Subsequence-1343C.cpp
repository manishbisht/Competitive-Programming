//Problem Link : https://codeforces.com/problemset/problem/1343/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool oppositesigns(ll x,ll y)
{
	return ((x^y)<0);
}
bool large(ll x,ll y)
{
	if(x>y)
	return 1;
	return 0;
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t,n,p,i;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	ll a[n];
    	vector <ll> b;
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	p=a[0];
    	for(i=0;i<n;i++)
		{
			if(oppositesigns(p,a[i])==0)
			{
				if(large(a[i],p)==1)
				p=a[i];
			}
			else
			{
				b.push_back(p);
				p=a[i];
			}
		}
		b.push_back(p);
		ll sum=0;
		for(i=0;i<b.size();i++)
		{
		    sum=sum+b[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
