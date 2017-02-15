#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, a, b, ans;
    cin>>k>>a>>b;
    ans = (a / k) + (b / k);
    if(((a%k) && b<k) || ((b%k) && a<k)){
        cout<<"-1"<<endl;
    }
    else {

        cout<<ans<<endl;
    }
    return 0;
}
