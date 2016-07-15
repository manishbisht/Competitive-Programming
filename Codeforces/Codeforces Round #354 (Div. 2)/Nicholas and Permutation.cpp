#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int a[100], n, i, b, c;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //cout<<max_element(a, a+n)-min_element(a, a+n);
    if(abs(max_element(a, a+n)-min_element(a, a+n))==n-1)
    {
        cout<<n-1;
        return 0;
    }
    else if(max_element(a, a+n)-min_element(a, a+n)<0)
    {
        b=&a[n-1]-max_element(a, a+n);
        c=min_element(a, a+n)-&a[0];
    }
    else
    {
        b=&a[n-1]-min_element(a, a+n);
        c=max_element(a, a+n)-&a[0];
    }
    if(b>=c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }
    return 0;
}
