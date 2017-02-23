#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i;
    string a, b, c, d;
    cin>>a>>b>>n;
    cout<<a<<" "<<b<<endl;
    for(i = 0; i < n; ++i){
        cin>>c>>d;
        if(a == c){
            a = d;
        }
        else if(a == d){
            b = c;
        }
        else if(b == c){
            b = d;
        }
        else if(b == d){
            a = c;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
