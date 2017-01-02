#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, t, i, ans;
    string s;
    cin>>n;
    ans = 0;
    for(i=0;i<n;i++){
        cin>>t>>s;
        if(s=="South"){
            ans=ans+t;
        }
        else if(s=="North"){
            ans=ans-t;
        }
        else if(ans==0 || ans==20000){
            ans=-1;
            break;
        }
        if(ans>20000 || ans<0){
            ans=-1;
            break;
        }
    }
    if(ans==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
