#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n, m, t, i, j, temp;
char c;
int main()
{
    cin>>n>>m;
    temp=0;
    for(i=0;i<n;i++){
        cin>>c>>t;
        if(c=='+'){
            m=m+t;
        }
        else if(m-t>=0){
            m=m-t;
        }
        else {
            temp++;
        }
    }
    cout<<m<<" "<<temp;
    return 0;
}
