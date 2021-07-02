#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, ans, i, j;
    vector<long long int> v;
    cin>>n;
    ans = 0;
    if(n%2==0){
        for(i=0;i<n/2;i++){
            v.push_back(2);
            ans++;
        }
    }
    else {
        for(i=0;i<(n/2)-1;i++){
            v.push_back(2);
            ans++;
        }
        ans++;
        v.push_back(3);
    }
    cout<<ans<<endl;
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
