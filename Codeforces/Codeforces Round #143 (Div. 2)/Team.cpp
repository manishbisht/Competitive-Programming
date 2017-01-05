#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, a, b, c, ans, i;
    cin>>n;
    ans = 0;
    for(i = 0; i < n; i++){
        cin>>a>>b>>c;
        if(a + b + c >= 2){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
