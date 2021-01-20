//Problem: MODEFREQ (August Lunchtime 2020)
#include<bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
        int n;
        cin>>n;
       
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<int,int>b;
        for(auto x:a){
        	b[x]++;
		}
		map<int,int>c;
		for(auto it = b.cbegin(); it != b.cend(); ++it ){
			c[it->second]++;
			
		}
		int result=0;
		int val=INT_MAX;
		for(auto it = c.cbegin(); it != c.cend(); ++it )
		{
			if(it->second>result)
			{
				result=it->second;
				val=it->first;
			}
			if(it->second==result)
			{
				if(it->first<val)
				{
					result=it->second;
					val=it->first;
				}
				else
					continue;
			}
		}
		cout<<val<<endl;
       
}
	
	return 0;
}
