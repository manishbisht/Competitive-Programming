//PROBLEM- WATMELON(September lunctime)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int x=0;x<t;x++)
    {
        int n;
        cin>>n;;
        int a[n],i,s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s>=0)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}
