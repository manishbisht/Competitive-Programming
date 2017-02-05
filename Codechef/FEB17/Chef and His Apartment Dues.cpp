#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, i, j, sum, a;
    cin>>t;
    for(i = 0; i < t; i++){
        cin>>n;
        sum = 0;
        for(j = 0; j < n; ++j){
            cin>>a;
            if(a == 1){
                if(sum != 0){
                    sum += 100;
                }
            }
            else {
                sum += 1100;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
