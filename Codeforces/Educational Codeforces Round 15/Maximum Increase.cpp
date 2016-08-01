#include <bits/stdc++.h>
using namespace std;
long long int n, i, j, a[100000], temp, ans;
string s;
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
        cin>>a[i];
	}
	temp=0;
	ans=0;
	for(i=1;i<n;i++){
        if(a[i-1]<a[i]){
            temp++;
        }
        else{
            temp=0;
        }
        if(ans<temp){
            ans=temp;
        }
        //cout<<temp<<" "<<ans<<endl;
	}
	cout<<ans+1<<endl;
    return 0;
}
