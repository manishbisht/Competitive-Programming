#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

int hello()
{
	vector<int>arr(100);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int target;
	cin>>target;
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid]==target)return mid;
		if(arr[mid]>=arr[low])
		{
			if(target>=arr[low]&&target<arr[mid])
			high=mid-1;
			else
			low=mid+1;
		}
		else
		{
			if(target>arr[mid]&&target<=arr[high])
			low=mid+1;
			else
			high=mid-1;
		}
	}
	
}

main()
{
	cout<<hello();
	

return 0;
}


