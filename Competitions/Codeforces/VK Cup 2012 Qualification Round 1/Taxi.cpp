#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, ans, i, b, t, a[5];
    for(i = 1; i < 5; ++i){
        a[i] = 0;
    }
    cin>>n;
    for(i = 0; i < n; ++i){
        cin>>b;
        a[b]++;
    }
    ans = a[4];
    if(a[1] < a[3]){
        ans += a[1];
        a[3] -= a[1];
        a[1] = 0;
    }
    else if(a[3] < a[1]){
        ans += a[3];
        a[1] -= a[3];
        a[3] = 0;
    }
    else {
        ans += a[1];
        a[1] = 0;
        a[3] = 0;
    }
    if(a[1] > a[2]){
        t = min(a[1] / 2, a[2]);
        ans = ans + t;
        a[1] -= t*2;
        a[2] -= t;
    }
    /*if(a[1] < a[2]){
        ans += a[1];
        a[2] -= a[1];
        a[1] = 0;
    }
    else if(a[2] < a[1]){
        ans += a[2];
        a[1] -= a[2];
        a[2] = 0;
    }
    else {
        ans += a[1];
        a[1] = 0;
        a[2] = 0;
    }*/
    ans += a[1];
    ans += a[2];
    ans += a[3];
    cout<<ans<<endl;
    return 0;
}
