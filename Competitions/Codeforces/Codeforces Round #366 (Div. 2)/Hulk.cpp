#include <bits/stdc++.h>
using namespace std;
long long int n, i;
int main()
{
	cin>>n;
	cout<<"I hate ";
	for(i=1;i<n;i++){
	    if(i%2==1){
            cout<<"that I love ";
	    }
	    else {
            cout<<"that I hate ";
	    }
	}
	cout<<"it"<<endl;
    return 0;
}
