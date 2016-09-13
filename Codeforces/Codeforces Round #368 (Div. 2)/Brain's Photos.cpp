#include <bits/stdc++.h>
using namespace std;
long long int a, b, i, cc;
char c;
int main()
{
	cin>>a>>b;
	cc=1;
	for(i=0;i<(a*b);i++){
        cin>>c;
        if(c=='W' || c=='G' || c=='B'){
            cc=1;
        }
        else {
            cc=0;
            break;
        }
	}
	if(cc==1){
        cout<<"#Black&White"<<endl;
	}
	else {
        cout<<"#Color"<<endl;
	}
    return 0;
}
