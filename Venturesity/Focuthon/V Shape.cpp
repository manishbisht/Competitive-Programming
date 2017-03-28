#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j, k;
    char c;
    cin>>t;
    for(i = 0; i < t; ++i){
        cin>>c>>n;
        for(j = 0; j < n; ++j){
            for(k = 0; k < j; ++k){
                cout<<" ";
            }
            cout<<c;
            for(k = 0; k < n-j-2; ++k){
                cout<<"  ";
            }
            if(j != n - 1){
                cout<<" "<<c;
            }
            cout<<endl;
        }
    }
    return 0;
}
