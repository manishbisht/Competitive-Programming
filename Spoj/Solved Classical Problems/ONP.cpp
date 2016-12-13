#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, i, j;
	char c;
	string s, s1;
	vector<long long int> v;
	cin>>t;
	for(i = 0; i < t; ++i){
        cin>>s;
        s1="";
        for(j=0;j<s.length();j++){
            if(s[j]=='+' || s[j]=='-' || s[j]=='/' || s[j]=='*' || s[j]=='(' || s[j]=='^'){
                v.push_back(s[j]);
            }
            else if(s[j]==')'){
                c = v.back();
                s1 = s1 + c;
                v.pop_back();
                v.pop_back();
            }
            else {
                s1=s1+s[j];
            }
        }
        cout<<s1<<endl;
	}
    return 0;
}
