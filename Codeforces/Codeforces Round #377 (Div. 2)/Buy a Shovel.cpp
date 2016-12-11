#include <bits/stdc++.h>
using namespace std;
long long int k, r, ans;
string s;
int main()
{
    cin>>k>>r;
    k=k-r;
    k=k%10;
    ans=1;
    if(k==0){
        cout<<ans<<endl;
        return 0;
    }
    else {
        while(k%10!=0 && ans<9117 3){
            k=k*2;
            k=k%10;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
