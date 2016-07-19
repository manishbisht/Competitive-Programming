#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n, a, b, i, c;
string s;
int main()
{
	cin>>n;
	c=0;
	for(i=0;i<n;i++){
        cin>>s>>a>>b;
        if(b>a && a>=2400){
            c++;
        }
	}
	if(c>0){
        cout<<"YES"<<endl;
	}
	else {
        cout<<"NO"<<endl;
	}
    return 0;
}
