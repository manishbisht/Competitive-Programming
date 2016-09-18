#include <bits/stdc++.h>
using namespace std;
long long int i, a, b, c, d, temp, ans;
string s;
int main()
{
	cin>>s;
	a=0;
	b=0;
	c=0;
	d=0;
	if(s.length()==2){
        if(s[0]==s[1]){
            cout<<"1"<<endl;
        }
        else if(s=="RU" || s=="RD" || s=="LU" || s=="LD" || s=="UR" || s=="UL" || s=="DR" || s=="DL"){
            cout<<"1"<<endl;
        }
        else {
            cout<<"0"<<endl;
        }
	}
	if(s.length()%4==0){
        temp=s.length()/4;
        for(i=0;i<s.length();i++){
            if(s[i]=='L'){
                a++;
            }
            else if(s[i]=='R'){
                b++;
            }
            else if(s[i]=='U'){
                c++;
            }
            else {
                d++;
            }
        }
        if(a>temp){
            ans=ans+(a-temp);
        }
        if(b>temp){
            ans=ans+(b-temp);
        }
        if(c>temp){
            ans=ans+(c-temp);
        }
        if(d>temp){
            ans=ans+(d-temp);
        }
        cout<<ans<<endl;
	}
	else {
        cout<<"-1"<<endl;
	}
    return 0;
}
