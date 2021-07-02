//Problem Link : https://codeforces.com/problemset/problem/753/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,sum=0,i;
    cin>>n;
    vector <ll> b;
    if(n==1)
    {
    	cout<<n<<endl<<n;
    	return 0;
	}
    for(i=1;i<n;i++)
    {
    	if((n-sum-i)>i)
    	{
    		sum+=i;
    		b.push_back(i);
		}
		else
		{
			b.push_back(n-sum);
			break;
		}
	}
	cout<<b.size()<<endl;
	for(i=0;i<b.size();i++)
	cout<<b[i]<<" ";
	return 0;
}
