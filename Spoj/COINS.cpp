#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, i, j, len;
	string s;
	vector<long long int> v1, v2;
	while(getline(cin, s)){
        for(i = 0;i < s.length(); i++){
            v1.push_back(s[i]-48);
        }
        len=s.length();
        getline(cin, s);
        for(i = 0;i < s.length(); i++){
            v2.push_back(s[i]-48);
        }
        if(len<s.length()){
            len = s.length();
        }
        len++;
        while(v1.size()!=len){
            v1.insert(v1.begin(), 0);
        }
        while(v2.size()!=len){
            v2.insert(v2.begin(), 0);
        }
        t = 0;
        for(i=len-1;i>=0;i--){
            v2[i] = v1[i]+v2[i]+t;
            if(v2[i]>9){
                t = v2[i] / 10;
                v2[i] = v2[i] % 10;
            }
            else {
                t = 0;
            }
        }
        /*for(i=0;i<v2.size();i++){
            cout<<v2[i];
        }
        cout<<endl;*/
        t = 0;
        for(i=0;i<v2.size();i++){
            v2[i] = v2[i] + (10 * t);
            if(v2[i]%2==1){
                t = 1;
            }
            else {
                t = 0;
            }
            v2[i] = v2[i] / 2;
        }
        /*for(i=0;i<v2.size();i++){
            cout<<v2[i];
        }
        cout<<endl;*/
        for(i=len-1;i>=0;i--){
            if(v1[i]<v2[i]){
                v1[i-1]--;
                v1[i] = v1[i] + 10;
            }
            v1[i] = v1[i] - v2[i];
        }
        for(i=0;i<len;i++){
            if(v2[i]!=0){
                cout<<v2[i];
            }
        }
        cout<<endl;
        for(i=0;i<len;i++){
            if(v1[i]!=0){
                cout<<v1[i];
            }
        }
        cout<<endl;
        /*cin>>n>>a;
        ans = (n + a) / 2;
        cout<<ans<<endl<<n-ans<<endl;*/
	}
    return 0;
}
