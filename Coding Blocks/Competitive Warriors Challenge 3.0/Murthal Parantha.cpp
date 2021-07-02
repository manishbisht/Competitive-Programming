#include <iostream>
#include <bits/stdc++.h>
 
using namespace std ;
 
int N,P,A[51],ans,AP[10][1001];
 
bool check(int x){
	int total = 0;
	for(int i=1;i<=N;i++){
		total += (upper_bound(AP[A[i]]+1,AP[A[i]]+1+1000,x)-(AP[A[i]]+1));
	}
	return (total>=P) ;
}

int main(){
	memset(AP,0,sizeof AP) ;
	for(int i=1;i<=8;i++){
		for(int j=1;j<=1000;j++){
			AP[i][j] = i*j ;
			AP[i][j] += AP[i][j-1] ;
		}
	}	
	scanf("%d",&P) ;
	scanf("%d",&N) ;
	for(int i=1;i<=N;i++){
		scanf("%d",&A[i]) ;
	}
	if(P==0)
		ans = 0;
	else{	
		int low,high,mid ;
		low = 1;
		high = 100000000 ;
		while(low<=high){
            mid = (low+high)/2 ;
			if(check(mid) && (mid == 1 || !check(mid-1)))
				break ;
			else if(check(mid))
				high = mid-1;
			else
				low = mid+1;
		}
		ans = mid ;
	}  
	printf("%d\n",ans) ;
	return 0;
}
