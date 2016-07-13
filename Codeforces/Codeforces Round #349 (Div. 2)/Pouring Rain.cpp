#include <iostream>
#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
long double d, h, v, e;
int main()
{
	cin>>d>>h>>v>>e;
	d=d/2;
	if((PI*d*d*e)>v)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<fixed<<setprecision(12)<<(PI*d*d*h)/(v-(PI*d*d*e));
        //cout<<PI/(PI-4);
    }
    return 0;
}
