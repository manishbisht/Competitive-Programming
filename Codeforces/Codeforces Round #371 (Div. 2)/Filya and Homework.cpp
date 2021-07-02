#include <bits/stdc++.h>
using namespace std;
long long int n, i, temp;
vector<long long int> a, v;
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	if(v.size()<2){
        cout<<"YES"<<endl;
        return 0;
	}
	else {
        for(i=0;i<v.size()-1;i++){
            if(abs(v[i]-v[i-1])!=0){
                a.push_back(abs(v[i]-v[i+1]));
            }
        }
	}
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	if(a.size()>1){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
    return 0;
}
