#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, j, t, n, a, b[100005];
    cin>>n;
    for(i = 0; i <= n; ++i){
        b[i] = 0;
    }
    j = n;
    for(i = 0; i < n; ++i){
        cin>>a;
        b[a]= 1;
        while(b[j]){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
    }
    return 0;
}
