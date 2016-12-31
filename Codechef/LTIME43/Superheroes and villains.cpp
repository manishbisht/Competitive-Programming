#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, i, j, a, b, l, temp;
    string s;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        temp = 0;
        a=1;
        b=1;
        for(j=0;j<n;j++){
            cin>>s;
            l = s.length();
            if(s[l-1]=='n' && s[l-2]=='a' && s[l-3]=='m'){
                a++;
            }
            else{
                b++;
            }
            if(a==b+2 && temp==0){
                temp = 1;
            }
            else if(b==a+3 && temp==0){
                temp = 2;
            }
        }
        //cout<<a<<b<<endl;
        if(temp==0){
            cout<<"draw"<<endl;
        }
        else if(temp==1){
            cout<<"superheroes"<<endl;
        }
        else {
            cout<<"villains"<<endl;
        }
    }
    return 0;
}
