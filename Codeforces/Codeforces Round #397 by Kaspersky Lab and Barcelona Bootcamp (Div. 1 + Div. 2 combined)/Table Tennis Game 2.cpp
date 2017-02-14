#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, a, b, ans;
    cin>>k>>a>>b;
    if(a < k && b < k){
        cout<<"-1"<<endl;
    }
    else {
        ans = (a / k) + (b / k);
        cout<<ans<<endl;
    }
    return 0;
}
