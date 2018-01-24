#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n, c;
int main()
{
	cin>>n;
	c=2*(n/3);
	if(n%3!=0)
    {
        c++;
    }
    cout<<c<<endl;
    return 0;
}
