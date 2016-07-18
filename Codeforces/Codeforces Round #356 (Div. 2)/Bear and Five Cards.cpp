#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int a[6], i, j, k, temp, sum;
char c;
int main()
{
	for(i=0;i<5;i++){
        cin>>a[i];
	}
	temp=0;
	for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            for(k=j+1;k<5;k++){
                if(a[i]==a[j] && a[j]==a[k]){
                    if(temp<a[k]*3){
                            temp=a[k]*3;
                    }
                }
                else if(a[i]==a[j]){
                    if(temp<a[j]*2){
                            temp=a[j]*2;
                    }
                }
                else if(a[j]==a[k]){
                    if(temp<a[j]*2){
                            temp=a[j]*2;
                    }
                }
                else if(a[i]==a[k]){
                    if(temp<a[i]*2){
                            temp=a[i]*2;
                    }
                }
            }
        }
	}
	sum=0;
	for(i=0;i<5;i++){
        sum=sum+a[i];
	}
	cout<<sum-temp;
    return 0;
}
