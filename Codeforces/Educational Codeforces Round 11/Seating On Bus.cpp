#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n, p, i, j, temp;
int main()
{
	cin>>n>>p;
	temp=0;
	for(i=1;i<=n*2;i++)
    {
        if(i+n*2<=p)
        {
            cout<<i+n*2<<" ";
        }
        if(i<=p)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
