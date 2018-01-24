#include <bits/stdc++.h>
using namespace std;
long long int n, i, a[100000], temp;
int main()
{
    cin>>n;
	for(i=0;i<n;i++){
        cin>>a[i];
	}
	sort(a, a+n);
	temp=1;
	for(i=0;i<n;i++){
        if(a[i]>=temp){
            temp++;
        }
	}
	cout<<temp<<endl;
    return 0;
}
