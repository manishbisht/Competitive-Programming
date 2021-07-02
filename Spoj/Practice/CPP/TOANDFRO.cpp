#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, n, i, j, l, r, k;
	string s, s1;
	cin>>n;
	while(n!=0){
	    cin>>s;
	    i=0;
	    s1="";
	    for(i=0;i<n;i++){
            l=n+n-i-i-1;
            r=n+n-l;
            k=0;
            for(j=i;j<s.length();){
                s1=s1+s[j];
                if(k%2==0){
                    j=j+l;
                }
                else{
                    j=j+r;
                }
                k++;
            }
	    }
	    cout<<s1<<endl;
	    cin>>n;
	}
    return 0;
}
