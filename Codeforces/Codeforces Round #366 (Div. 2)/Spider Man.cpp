#include<iostream>
using namespace std;
const int MAXN=100001;
int main (){
	int n;
	long long x=0;
	long a[MAXN];
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a[i];
		x+=a[i]-1;
		if (x%2==1) cout<<1<<endl;
		else cout<<2<<endl;
	}
	return 0;
}
