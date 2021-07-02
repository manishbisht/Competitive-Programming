#include <bits/stdc++.h>
using namespace std;
long long int t, n, i, ans;
int main()
{
	cin>>t;
	for(i=0;i<t;i++){
        cin>>n;
        if(n==1){
            cout<<"1"<<endl;
        }
        else if(n==2){
            cout<<"4"<<endl;
        }
        else {
            n=n-2;
            ans=(n*(4+((n-1)*-2)))/2;
            cout<<ans<<endl;
        }
	}
    return 0;
}
