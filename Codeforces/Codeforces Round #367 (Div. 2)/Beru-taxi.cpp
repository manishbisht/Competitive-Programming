#include <bits/stdc++.h>
using namespace std;
long long int a, b, n, x, y, v, i;
double ans, temp;
int main()
{
	cin>>x>>y>>n>>a>>b>>v;
	ans=(sqrt(((x-a)*(x-a))+((y-b)*(y-b))))/v;
	//cout<<ans<<endl;
	for(i=1;i<n;i++){
        cin>>a>>b>>v;
        temp=(sqrt(((x-a)*(x-a))+((y-b)*(y-b))))/v;
        if(temp<ans){
            ans=temp;
        }
        //cout<<sqrt(((x-a)*(x-a))+((y-b)*(y-b)))<<endl;
	}
	cout<<fixed<<setprecision(20)<<ans<<endl;
    return 0;
}
