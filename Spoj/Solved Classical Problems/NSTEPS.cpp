#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, x, y, i, j;
	cin>>t;
	for(i=0;i<t;i++){
        cin>>x>>y;
        if(y%2==0){
            if(x==y || x-2==y){
                cout<<x+y<<endl;
            }
            else {
                cout<<"No Number"<<endl;
            }
        }
        else{
            if(x==y || x-2==y){
                cout<<x+y-1<<endl;
            }
            else {
                cout<<"No Number"<<endl;
            }
        }

	}
    return 0;
}
