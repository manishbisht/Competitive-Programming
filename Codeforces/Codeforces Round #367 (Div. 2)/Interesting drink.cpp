#include <bits/stdc++.h>
using namespace std;
long long int a[100005], i, j, n, q, b;
int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    cin>>q;
    for(i=0;i<q;i++){
        cin>>b;
        cout<<upper_bound(a, a+n, b)-a<<endl;
    }
    return 0;
}
