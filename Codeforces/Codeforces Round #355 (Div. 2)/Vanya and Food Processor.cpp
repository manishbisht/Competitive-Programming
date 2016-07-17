#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n, h, k, s, i, temp, l, r;
int main()
{
    cin>>n>>h>>k;
    s=0;
    l=0;
    for(i=0; i<n; i++)
    {
        cin>>temp;
        if(l+temp <= h)
        {
            l+=temp;
        }
        else
        {
            s++;
            l=temp;
        }
        r=l/k;
        s=s+r;
        l-=r*k;
    }
    if(l>0)
    {
        s++;
    }
    cout<<s;
}
