#include <bits/stdc++.h>
using namespace std;
long long int f, s, i, j, n, a[115];
int main()
{
    f=0;
    s=1;
    for(i=0;i<115;i++)
    {
        f=f%1000000007;
        a[i]=f;
        n=f+s;
        f=s;
        s=n;
    }
    cin>>n;
    for(i=0;i<n;i++){
        cin>>f>>s;
        cout<<(a[s+2]-a[f+1])%1000000007<<endl;
    }
    return 0;
}
