//Problem Link : https://codeforces.com/problemset/problem/447/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	cin>>s;
	ll k,i,c=0;
	cin>>k;
	ll w[26];
	for(i=0;i<26;i++)
	cin>>w[i];
	for(i=0;i<s.size();i++)
	{
		c=c+(w[s[i]-'a']*(i+1));
	}
	sort(w,w+26);
	for(i=s.size()+1;i<=s.size()+k;i++)
	c=c+(i*w[25]);
	cout<<c;
    return 0;
}
