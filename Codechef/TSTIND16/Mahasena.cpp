#include <bits/stdc++.h>
using namespace std;
long long int n, a, b, temp, i;
int main()
{
    cin>>n;
    a=0;
    b=0;
    for(i=0;i<n;i++){
        cin>>temp;
        if(temp%2==0){
            a++;
        }
        else {
            b++;
        }
    }
    if(a>b){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else {
        cout<<"NOT READY"<<endl;
    }
    return 0;
}
