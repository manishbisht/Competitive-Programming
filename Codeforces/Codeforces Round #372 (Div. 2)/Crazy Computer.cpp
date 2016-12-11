#include <bits/stdc++.h>
using namespace std;
long long int n, c, a, b, ans, i;
int main()
{
	cin>>n>>c>>b;
	ans=1;
	for(i=0;i<n-1;i++){
        cin>>b;
        if(b-a<=c){
            ans++;
        }
        else {
            ans=1;
        }
        a=b;
	}
	cout<<ans<<endl;
    return 0;
}
