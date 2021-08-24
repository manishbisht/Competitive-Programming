#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		int arr[n];
		set<int> s;
		int temp;
		for(int i=0;i<n;i++) {
			cin>>arr[i];
			temp=arr[i]%k;
			s.insert(temp);
		}
		int flag=0;
		for(int i=0;i<n;i++) {
			if(arr[i]%k!=0) {
				if(s.find(k-arr[i]%k)==s.end()) {
					flag=1;
				}
			}
		}
		if(flag==1) {
			cout<<"NO"<<"\n";
		}
		else {
			cout<<"YES"<<"\n";
		}
		}
	return 0;
}
