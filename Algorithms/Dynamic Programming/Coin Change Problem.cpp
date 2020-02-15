// coins={..},sum is given .calculate total number of ways to get the sum.
//infinite supply of coins.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[5]={1,2,5};
int main()
{
	int sum;
cin>>sum;
int dp[5+1][sum+1];
for(int i=0;i<sum+1;i++)
dp[0][i]=0;
for(int i=0;i<3+1;i++)
dp[i][0]=1;
for(int i=1;i<3+1;i++)
{
	for(int j=1;j<sum+1;j++)
		{
		    if(j-arr[i-1]<0)
            dp[i][j]=dp[i-1][j];
            else
            dp[i][j]=dp[i-1][j]+dp[i][j-arr[i-1]];
		}
	
}
for(int i=0;i<3+1;i++)
{
	for(int j=0;j<sum+1;j++)
		{
		    cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	
}
cout<<"no of ways:"<<dp[3][sum]<<endl;
return 0;
}
