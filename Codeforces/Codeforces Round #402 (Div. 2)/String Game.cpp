#include<bits/stdc++.h>
using namespace std;
int a[200005];
int b[200005];
string s,t;
int R;

int check(int m){
	int k=0; 
	for(int i=m;i<R;i++)
		b[k++]=a[i];
	sort(b,b+k);
	int l=0;
	for(int i=0;i<k;i++){
		if(s[b[i]-1]==t[l])
			l++;
	}
	if(l==t.size())
		return 1;
	return 0;
}

int main(){
	cin>>s>>t;
	R=s.size();
	for(int i=0;i<s.size();i++){
		cin>>a[i];
	}
	int l=0;
    int r=s.size();
	while(l<r){
		int m=(l+r)/2;
		if(check(m)) l=m+1;
		else r=m;
	}
	cout<<l-1<<endl;
}
