#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, a, ans, i;
    cin>>n;
    ans = 0;
    for(i = 0; i < n; i++){
        cin>>a;
        ans = ans + a;
    }
    if(ans%4==0){
        cout<<ans/4<<endl;
    }
    else{
        cout<<(ans/4)+1<<endl;
    }
    return 0;
}
