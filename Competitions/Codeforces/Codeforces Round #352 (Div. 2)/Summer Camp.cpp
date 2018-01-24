#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n, temp;
int main()
{
	cin>>n;
	if(n<10 && n>0)
    {
        cout<<n<<endl;
    }
    else if(n>9 && n<190)
    {
        n=n-9;
        temp=n%2;
        n=9+n/2;

        if(temp==0)
        {
            cout<<n%10<<endl;
        }
        else
        {
            n++;
            cout<<n/10<<endl;
        }
    }
    else
    {
        n=n-189;
        temp=n%3;
        n=99+n/3;
        if(temp==0)
        {
            cout<<n%10<<endl;
        }
        else if(temp==1)
        {
            n++;
            cout<<n/100<<endl;
        }
        else
        {
            n++;
            n=n/10;
            cout<<n%10<<endl;
        }
    }
    return 0;
}
