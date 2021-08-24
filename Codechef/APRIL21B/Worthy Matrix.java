#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t-->0) {
		int n,m,k;
		cin>>n>>m>>k;
		long mat[n+1][m+1];
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=m;j++) {
			    cin>>mat[i][j];
			}
		}
		long temp;
		for(int i=0;i<=n;i++) {
			temp=0;
			for(int j=0;j<=m;j++) {
				mat[i][j]=mat[i][j]+temp;
				temp=mat[i][j];
			}
		}
		for(int i=0;i<=m;i++) {
			temp=0;
			for(int j=0;j<=n;j++) {
				mat[j][i]=mat[j][i]+temp;
				temp=mat[j][i];
			}
		}
		long res=0;
		for(int i=1;i<=min(m,n);i++) {
			for(int j=i;j<=n;j++) {
				for(int l=i;l<=m;l++) {
					if(((mat[j-i][l-i]+mat[j][l])-(mat[j-i][l]+mat[j][l-i]) )/(pow(i,2)) >=k) {
						res++;
					}
				}
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}
