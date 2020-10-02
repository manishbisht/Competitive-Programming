//Problem Link : https://codeforces.com/problemset/problem/898/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,a,b,i,y;
	cin>>n>>a>>b; 
	for(i=0;i<=n/a;i++)
	{
		y = (n-i*a)/b;
		if(i*a+y*b==n)
		{
			cout<<"YES"<<endl<<i<<" "<<y;
			return 0;
		}
	}
	cout<<"NO";
    return 0;
}
