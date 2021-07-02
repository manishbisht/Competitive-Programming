#include <bits/stdc++.h>
using namespace std;
long long int a, b, c, d, k, t1, t2, ans;
string s;
int main()
{
	cin>>a>>b>>c>>d>>k;
	if(a<c){
        t1=c;
	}
	else {
        t1=a;
	}
	if(b<d){
        t2=b;
	}
	else {
        t2=d;
	}
	ans=t2-t1+1;
	if(k>=t1 && k<=t2){
        ans--;
	}
	cout<<ans<<endl;
    return 0;
}
