#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, a, b, i, j, ans;
	cin>>t;
	for(i=0;i<t;i++){
        cin>>a>>b;
        a=a%10;
        if(b==0){
            ans = 1;
        }
        else {
            b = b % 4;
            if(b==0){
                b = 4;
            }
            ans = pow(a, b);
            ans = ans % 10;
        }
        cout<<ans<<endl;
	}
    return 0;
}
