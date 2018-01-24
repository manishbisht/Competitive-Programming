#include <bits/stdc++.h>
using namespace std;
long long int n, i, temp;
string s[1005];
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
        cin>>s[i];
	}
	temp=0;
	for(i=0;i<n;i++){
        if(s[i][0]=='O' && s[i][1]=='O'){
            s[i][0]='+';
            s[i][1]='+';
            temp=1;
            break;
        }
        else if(s[i][3]=='O' && s[i][4]=='O'){
            s[i][3]='+';
            s[i][4]='+';
            temp=1;
            break;
        }
	}
	if(temp==1){
        cout<<"YES"<<endl;
        for(i=0;i<n;i++){
            cout<<s[i]<<endl;
        }
	}
	else {
        cout<<"NO"<<endl;
	}
    return 0;
}
