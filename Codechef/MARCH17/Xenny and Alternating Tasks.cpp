#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, i, j, a, b, tt;
    cin>>t;
    for(i = 0; i < t; ++i){
        cin>>n;
        a = 0;
        b = 0;
        for(j = 0; j < n; ++j){
            cin>>tt;
            if(j % 2 == 0){
                a += tt;
            }
            else {
                b += tt;
            }
        }
        for(j = 0; j < n; ++j){
            cin>>tt;
            if(j % 2 == 0){
                b += tt;
            }
            else {
                a += tt;
            }
        }
        cout<<min(a, b)<<endl;
    }
    return 0;
}
