#include <bits/stdc++.h>
using namespace std;
long long int t, n, i, a, j, temp;
int main()
{
	cin>>t;
	for(i=0;i<t;i++){
        cin>>n;
        a=(n*(n+1))/2;
        temp=1;
        while(temp<=n){
            a=a-temp*2;
            temp=temp*2;
        }
        cout<<a<<endl;
	}
    return 0;
}
