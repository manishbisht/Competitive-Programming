#include <bits/stdc++.h>
#define INF (1<<29)
using namespace std;
int main()
{
    long long int n, a, b, i, c=0;
    long long int from = -INF;
    long long int to = INF;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>a>>b;
        if(b == 1){
            from = max(from, 1900-c);
        }
        else {
            to = min(to, 1899-c);
        }
        c = c + a;
    }
    if(from > to){
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(to == INF){
        cout<<"Infinity"<<endl;
        return 0;
    }
    cout<<to+c<<endl;
    return 0;
}
