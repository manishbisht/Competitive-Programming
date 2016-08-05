#include <bits/stdc++.h>
using namespace std;
long long int a, b, n, ans1, ans2, i;
int main()
{
	cin>>n;
	ans1=0;
	ans2=0;
	for(i=0;i<n;i++){
        cin>>a>>b;
        if(a>b){
            ans1++;
        }
        else if(b>a){
            ans2++;
        }
	}
	if(ans1>ans2){
        cout<<"Mishka"<<endl;
	}
	else if(ans2>ans1){
        cout<<"Chris"<<endl;
	}
	else {
        cout<<"Friendship is magic!^^"<<endl;
	}
    return 0;
}
