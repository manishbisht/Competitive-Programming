//Problem Link : https://codeforces.com/problemset/problem/1140/D

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,w=0,i;
	cin>>n;
	for(i=3;i<=n;i++)
	w=w+(i*(i-1));
	cout<<w;
	return 0;
}
