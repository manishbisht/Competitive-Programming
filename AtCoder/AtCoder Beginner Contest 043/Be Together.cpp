#include <bits/stdc++.h>
using namespace std;
long long int n, a[105], i, temp, ans1, ans2;
int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    temp=a[0];
    for(i=1;i<n;i++){
        temp=temp+a[i];
    }
    temp=temp/n;
    ans1=0;
    ans2=0;
    for(i=0;i<n;i++){
        ans1=ans1+((a[i]-temp)*(a[i]-temp));
        ans2=ans2+((a[i]-temp-1)*(a[i]-temp-1));
    }
    if(ans1<ans2){
        cout<<ans1<<endl;
    }
    else {
        cout<<ans2<<endl;
    }
    return 0;
}
