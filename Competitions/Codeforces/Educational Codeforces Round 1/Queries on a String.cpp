#include <bits/stdc++.h>
using namespace std;
long long int a, b, c, q, i, j;
string s, ss;
char cc;
int main()
{
	cin>>s>>q;
	for(i=0;i<q;i++){
        cin>>a>>b>>c;
        ss="";
        ss=s.substr(a-1, b-a+1);
        for(j=0;j<b-a+1;j++){
            s[((j+c)%(b-a+1))+a-1]=ss[j];
        }
	}
	cout<<s<<endl;
    return 0;
}
