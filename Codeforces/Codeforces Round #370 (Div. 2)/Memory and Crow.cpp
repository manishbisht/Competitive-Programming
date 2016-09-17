#include <bits/stdc++.h>
using namespace std;
long long int n, a[1000005], i;
string s[1005];
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
        cin>>a[i];
	}
	for(i=0;i<n-1;i++){
        cout<<a[i]+a[i+1]<<" ";
	}
	cout<<a[i];
    return 0;
}
