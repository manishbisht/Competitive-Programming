#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll N=1e6+2,inf=1e9+7;
int main(){
     int x,y;
	 cin>>x>>y;
     int a=y,b=y,c=y;
     int rs=0;
     while(true){
     	if(a>=x&&b>=x&&c>=x)cout<<rs<<"\n",exit(0);
     	rs++;
     	if(rs%3==1) a=b+c-1;
     	else if(rs%3==2) b=a+c-1;
     	else c=a+b-1;
     }
	return 0;
}
