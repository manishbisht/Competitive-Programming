#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ll  n;
	cin>>n;
	ll a=1, b=1;
	int temp;
	for(int i=1; i<n; ++i)
	{
		b+=a;
		temp = b;
		b = a;
		a = temp;
		
	}

	cout<<b;
	return 0;
}
