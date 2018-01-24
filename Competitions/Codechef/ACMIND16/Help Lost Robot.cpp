#include <bits/stdc++.h>
using namespace std;
long long int t, n, i, j, a, b, c, d;
int main()
{
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b>>c>>d;
        if((a==c || b==d) && (a!=b || c!=d)){
           if(a>c){
              cout<<"left"<<endl;
           }
           else if(a<c){
              cout<<"right"<<endl;
           }
           else if(b>d){
              cout<<"down"<<endl;
           }
           else {
              cout<<"up"<<endl;
           }
        }
        else {
            cout<<"sad"<<endl;
        }
    }
    return 0;
}
