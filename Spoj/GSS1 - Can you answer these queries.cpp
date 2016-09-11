#include <bits/stdc++.h>
using namespace std;
long long int n, i, j, a[50005], q, l, r;
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
        cin>>a[i];
	}
	cin>>q;
	for(i=0;i<q;i++){
        cin>>l>>r;
        l--;
        r--;
        cout<<*max_element(a+l, a+r+1)<<endl;
	}
    return 0;
}
