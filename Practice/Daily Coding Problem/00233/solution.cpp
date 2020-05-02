#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fib(ll n){
	ll a=1, b=1;
	ll temp;
	for(int i=1; i<n; ++i)
	{
		b+=a;
		temp = b;
		b = a;
		a = temp;
		
	}
	return b;
}

int main()
{
	ll  n;
	cin>>n;
	cout<<fib(n);
	return 0;
}
