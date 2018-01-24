#include <bits/stdc++.h>
using namespace std;
long long int t, n, i, j, a, b, temp;
string s;
int main()
{
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>s;
        a=0;
        b=0;
        for(j=0;j<n;j++){
            cin>>temp;
            if(a<2){
                b++;
            }
            else {
                a++;
            }
        }
        temp=a-b;
        if(temp==0){
            if(s=="Dee"){
                cout<<"Dum"<<endl;
            }
            else {
                cout<<s<<endl;
            }
        }
        else{
            if(temp<0 || temp%2!=0){
                if(s=="Dee"){
                    cout<<"Dum"<<endl;
                }
                else {
                    cout<<s<<endl;
                }
            }
            else {
                if(s=="Dee"){
                    cout<<s<<endl;
                }
                else {
                    cout<<"Dum"<<endl;
                }
            }
        }
    }
    return 0;
}
