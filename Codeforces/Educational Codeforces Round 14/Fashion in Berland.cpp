#include <bits/stdc++.h>
using namespace std;
long long int n, temp, i, b, a[1001];
string s;
int main()
{
	cin>>n;
	temp=0;
	for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            temp++;
        }
	}
	if(n==1&& a[0]==1){
        cout<<"YES"<<endl;
	}
	else if(n==1 && a[0]==0){
        cout<<"NO"<<endl;
	}
	else if(temp==1){
        cout<<"YES"<<endl;
	}
	else {
        cout<<"NO"<<endl;
	}
    return 0;
}
