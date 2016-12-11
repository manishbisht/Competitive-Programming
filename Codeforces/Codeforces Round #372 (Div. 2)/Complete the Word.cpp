#include <bits/stdc++.h>
using namespace std;
long long int c;
string s, temp, s1;
int main()
{
	cin>>s;
	if(s.length()<26){
        cout<<"-1"<<endl;
        return 0;
	}
	temp=s;
	s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	c=count(s.begin(), s.end(), '?');
	sort(s.begin(), s.end() );
    s.erase(unique(s.begin(), s.end()), s.end());
    if(s[0]=='?'){
        s.erase(0,1);
    }
    if(s.length()+c<26){
        //cout<<s.length()<<" "<<c;
        cout<<"-1"<<endl;
        return 0;
    }
    else if(s.length()==26){
        do{
            if(temp.find(s1)!=std::string::npos){
                cout<<s1<<endl;
                return 0;
            }
        } while (std::next_permutation(s1.begin(), s1.end()));
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<s1<<endl;
    return 0;
}
