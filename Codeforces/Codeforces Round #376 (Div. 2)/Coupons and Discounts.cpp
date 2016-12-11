#include <bits/stdc++.h>
using namespace std;
long long int n, a[200005], i;
int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            a[i]=0;
        }
        else if(i+1<n && a[i]<=a[i+1]){
            a[i+1]=a[i+1]-a[i];
            a[i]=0;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
