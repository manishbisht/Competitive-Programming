//Problem Link : https://codeforces.com/problemset/problem/1221/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
    	ll c,m,x,d;
    	cin>>c>>m>>x;
    	if(c<=x||m<=x||c==0||m==0)
    	{
    		cout<<min(c,m)<<endl;
		}
		else
		{
			c=c-x;m=m-x;
			if((c+m)/3>min(c,m))
			x=x+min(c,m);
			else
			x=x+(c+m)/3;
			cout<<x<<endl;
		}
	}
	return 0;
}
