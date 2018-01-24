#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
long long int n, i, a[200000], temp;
vector<int> v;
string s;
int main()
{
	cin>>n>>s;
	for(i=0;i<n;i++){
        cin>>a[i];
	}
	v.clear();
	temp=s.find("RL");
	while(temp!=std::string::npos){
	    v.push_back(a[temp+1]-a[temp]);
        temp=s.find("RL", temp+1);
	}
	if(v.size()>0){
        cout<<(*min_element(v.begin(), v.end()))/2<<endl;
	}
	else {
        cout<<"-1"<<endl;
	}
    return 0;
}
