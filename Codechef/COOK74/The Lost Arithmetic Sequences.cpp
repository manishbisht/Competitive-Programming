#include <bits/stdc++.h>
using namespace std;
long long int t, n, i, j, a[100005], b, c, temp1, temp2;
string s;
int main()
{
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>a[i];
        }
        sort(a, a+n);
        if(n==2){
            cout<<a[0]<<endl;
        }
        else {
            b=a[1]-a[0];
            c=a[2]-a[1];
            temp1=0;
            temp2=0;
            for(j=0;j<n-1;j++){
                if(a[i+1]-a[i]==b){
                    temp1++;
                }
                else if(a[i+1]-a[i]==c){
                    temp2++;
                }
            }
            if(temp1+temp2==n){
                if(temp1==1){

                }
            }
        }
    }
    return 0;
}
