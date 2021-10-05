#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>

#define int             long long int
#define pb              push_back
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mod             1000000007
#define w(x)            int x; cin>>x; while(x--)
using namespace std;


int findmax(int arr[100],int n)
{
	int maxi=arr[0];
	for(int i=1;i<n;i++)
	{
		maxi=max(arr[i],maxi);
	}
	return maxi;
}

bool isParatha(int mid,int paratha,int arr[100],int n)
{
	int time,count=0;
	for(int i=0;i<n;i++)
	{
		int r=arr[i];time=r;int j=2;
		while(time<=mid)
		{
			count++;time=time+(arr[i]*j);
			j++;
		}
	}
	return paratha<=count;
}
int32_t main()
{

 w(t)
 {
 	int n,chef,arr[100];
 	cin>>n>>chef;
 	for(int i=0;i<chef;i++)cin>>arr[i];
 	
 	int low=0,x=findmax(arr,chef),ans=0;
 	int high=(n/2)*((2*x)+(n-1)*x);
 	
 	while(low<=high)
 	{
 		int mid=(low+high)/2;
 		if(isParatha(mid,n,arr,chef))
 		{
 			ans=mid;high=mid-1;
		}
		else low=mid+1;
	}
 	cout<<ans<<"\n"<<endl;
 }
}

