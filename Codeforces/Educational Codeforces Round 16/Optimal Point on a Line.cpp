#include <bits/stdc++.h>
using namespace std;
long long int n, a[300005], i, j;
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
        cin>>a[i];
	}
	sort(a, a+n);
	if(n%2==0){
        cout<<a[(n/2)-1]<<endl;
	}
	else {
        cout<<a[((n+1)/2)-1]<<endl;
    }
    return 0;
}
