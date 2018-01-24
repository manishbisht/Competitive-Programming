#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, c, d, i, j, ans;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b>>c>>d;
        ans = 0;
        if(a==0 || b==0 || c==0 || d==0){
            ans = 1;
        }
        else if(a+b==0 || a+c==0 || a+d==0 || b+c==0 || b+d==0 || c+d==0){
            ans = 1;
        }
        else if(a+b+c==0 || b+c+d==0 || c+d+a==0 || d+a+b==0){
            ans = 1;
        }
        else if(a+b+c+d==0){
            ans = 1;
        }
        if(ans == 1){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
