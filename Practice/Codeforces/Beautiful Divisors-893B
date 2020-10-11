//Problem Link : https://codeforces.com/problemset/problem/893/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,i=1,j,num;
	vector <ll> bn;
	cin>>n;
	for(i=1;i<18;i+=2)
	{
		num=0;
		for(j=i;j>i/2;j--)
		{
			num+=pow(2,j-1);
		}
		bn.push_back(num);
	}
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
		ll g = n/i;
		if(find( bn.begin(), bn.end(), g) != bn.end())
		{
			cout<<n/i<<endl;
			break;
		}
	}
		i++;
	}
	return 0;
}
