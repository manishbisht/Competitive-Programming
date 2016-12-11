#include <bits/stdc++.h>
using namespace std;
long long int n, k, i, j, temp, ans;
set<long long int> v;
int main()
{
    cin>>n>>k;
    ans=1;
    for(i=0;i<n;i++){
        cin>>temp;
        v.insert(temp);
    }
    temp=v.size();
    for(i=0;i<k;i++){
        ans=ans*temp;
        temp--;
    }
    cout<<ans<<endl;
    return 0;
}
