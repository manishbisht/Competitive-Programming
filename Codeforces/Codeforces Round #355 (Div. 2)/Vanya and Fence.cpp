#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n, h, i, s, temp;
int main()
{
    cin>>n>>h;
    s=0;
    for(i=0; i<n; i++)
    {
        cin>>temp;
        if(temp<=h)
        {
            s++;
        }
        else
        {
            s=s+2;
        }
    }
    cout<<s;
}
