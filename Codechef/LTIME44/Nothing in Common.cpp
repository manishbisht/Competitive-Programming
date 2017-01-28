#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, j, k, n, m, temp, ans;
    vector<long long int> a;
    cin>>t;
    for(i = 0; i < t; i++){
        a.clear();
        cin>>n>>m;
        for(j = 0; j < n; j++){
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        ans = 0;
        for(j = 0; j < m; j++){
            cin>>temp;
            if(binary_search(a.begin(), a.end(), temp)){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
