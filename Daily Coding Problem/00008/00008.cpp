#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool findExistence(vector<long>v, long k);

int main(){
	
	long n;
	cin>>n;
	
	vector<long>v;
	long i,x;
	
	for(i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	
	long k;
	cin>>k;
	
	bool exist = findExistence(v,k);
	if(exist == true){
		cout<<"Exists";
	}
	else{
		cout<<"Doesn't Exists";
	}
	
}

bool findExistence(vector<long>v, long k){
	sort(v.begin(),v.end());
	long n = v.size();
	long l,r;
	l=0,r=n-1;
	while(l<r){
		if(v[l]+v[r]==k){
			return true;
		}
		else if( (v[l]+v[r]) < k){
			l++;
		}
		else{
			r--;
		}
	}
	return false;
}
