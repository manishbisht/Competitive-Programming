#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, j, a[10], b[10], c[10], ans;
    cin>>n;
    for(i = 1; i <= 5; ++i){
        a[i] = 0;
        b[i] = 0;
        c[i] = 0;
    }
    for(i = 0; i < n; ++i){
        cin>>j;
        a[j]++;
        c[j]++;
    }
    for(i = 0; i < n; ++i){
        cin>>j;
        b[j]++;
        c[j]++;
    }
    ans = 0;
    for(i = 1; i <= 5; ++i){
        if(c[i] % 2 == 0){
            ans += abs(a[i] - (c[i] / 2));
        }
        else {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<ans/2<<endl;
    return 0;
}
