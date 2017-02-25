#include <bits/stdc++.h>
using namespace std;
vector<long long int> calculate(long long int n){
    vector<long long int> v, a;
    if(n > 1){
        a = calculate(n / 2);
        v = a;
        v.push_back(n % 2);
        v.insert(v.end(), a.begin(), a.end());
        //v =  v + calculate(n/2);
    }
    else {
        v.push_back(n);
    }
    return v;
}
int main()
{
    long long int n, a, b, i, ans;
    cin>>n>>a>>b;
    vector<long long int> v;
    v = calculate(n);
    a--;
    ans = 0;
    for(i = a; i < b; ++i){
        //cout<<v[i]<<" ";
        if(v[i] == 1){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
