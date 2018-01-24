#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n, m, i, j, c, temp;
int main()
{
    cin>>n>>m;
	for(i=1;i<=n;i++){
        temp=m+i;
        c=c+(temp/5);
        if(i>=5){
            c=c-(i/5);
        }
        //cout<<c<<endl;;
	}
	cout<<c;
    return 0;
}
