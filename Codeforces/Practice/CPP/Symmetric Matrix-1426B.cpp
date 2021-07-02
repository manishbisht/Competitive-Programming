//Problem Link : http://codeforces.com/problemset/problem/1426/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,i,flag=0;
		cin>>n>>m;
		ll a[2*n][2];
		for(i=0;i<2*n;i++)
		cin>>a[i][0]>>a[i][1];
		if(m%2!=0)
		cout<<"NO"<<endl;
		else
		{
			for(i=0;i<2*n;i+=2)
			{
				if(a[i][1]==a[i+1][0])
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		}
		
	}
return 0;
}
