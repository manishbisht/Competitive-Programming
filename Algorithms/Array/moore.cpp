#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;



main()
{
	int n,i=0;
	cin>>n;
	int arr[100];
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
int ele=arr[0],count=0,flag=0;
	for(i=0;i<n;i++)
	{
		if(ele!=arr[i])
		count--;
		if(ele==arr[i])
		count++;
		if(count==0)
		{
			ele=arr[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==ele)flag++;
	}
	if(flag>n/2)cout<<"majority element is "<<ele;
	else
	cout<<"No majority element";

return 0;
}


