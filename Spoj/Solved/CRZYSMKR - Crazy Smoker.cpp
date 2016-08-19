#include <bits/stdc++.h>
using namespace std;
long long int t, n, i, j, ans;
int main()
{
	cin>>t;
	for(i=0;i<t;i++){
        cin>>n;
        n=n%11;
        n=n*8;
        n=n%11;
        if(n==0){
            cout<<"0"<<endl;
        }
        else {
            cout<<11-n<<endl;
        }
	}
    return 0;
}
