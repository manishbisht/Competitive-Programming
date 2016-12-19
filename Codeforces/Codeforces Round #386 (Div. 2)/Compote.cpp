#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c;
    cin>>a>>b>>c;
    b = b / 2;
    c = c / 4;
    cout<<min(a, min(b, c))*7<<endl;
    return 0;
}
