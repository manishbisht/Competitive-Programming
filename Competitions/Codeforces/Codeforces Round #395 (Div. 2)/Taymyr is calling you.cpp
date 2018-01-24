#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, t, i, ans = 0;
    cin>>a>>b>>c;
    vector<long long int> v;
    t = 0;
    while(t+a <= c){
        t = t + a;
        v.push_back(t);
    }
    t = 0;
    while(t+a <= c){
        t = t + b;
        if(binary_search(v.begin(), v.end(), t)){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
