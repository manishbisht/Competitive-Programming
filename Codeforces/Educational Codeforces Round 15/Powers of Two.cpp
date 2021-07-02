#include <bits/stdc++.h>
using namespace std;
long long int n, i, j, a[100000], temp;
string s;
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
        cin>>a[i];
	}
	temp=0;
	for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(((a[i]+a[j]) & ((a[i]+a[j]) - 1)) == 0){
                    //cout<<i<<" "<<j<<endl;
                temp++;
            }
        }
	}
	cout<<temp<<endl;
    return 0;
}
