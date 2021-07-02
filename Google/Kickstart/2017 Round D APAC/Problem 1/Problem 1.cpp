#include <bits/stdc++.h>
using namespace std;
long long int t, i;
float n, m;
int main()
{
    ifstream input;
    input.open("A-large.in");
    ofstream output;
    output.open("output.out");
    input>>t;
    for(i=0;i<t;i++){
        input>>n>>m;
        output<<"Case #"<<i+1<<": "<<fixed<<setprecision(6)<<(n-m)/(n+m)<<endl;
    }
    return 0;
}
