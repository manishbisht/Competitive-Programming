#include <bits/stdc++.h>
using namespace std;
long long int t, a[1000005], i, j, n, temp;
int main()
{
	cin>>t;
	for(i=0;i<t;i++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        for(j=0;j<n;j++){
            temp=(n-j+1)/(a[j]+1);
            cout<<temp<<endl;
            //cout<<(j+1+((a[j]+1)*temp))-(((j+1+(a[j]+1)*temp)/n)*n)<<endl;
        }
	}
    return 0;
}
