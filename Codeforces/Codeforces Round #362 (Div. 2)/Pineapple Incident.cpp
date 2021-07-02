#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int t, s, x, temp;
int main()
{
	cin>>t>>s>>x;
	temp=0;
	if(t==x){
        temp=1;
	}
	else if(x-t>1){
	    x=x-t;
        if(x%s==0 || (x-1)%s==0){
            temp=1;
        }
	}
	if(temp==1){
        cout<<"YES"<<endl;
	}
	else {
        cout<<"NO"<<endl;
	}
    return 0;
}
