#include <bits/stdc++.h>
using namespace std;
long long int n, a[505][505], b[505], i, j, c[505], temp, t;
int main()
{
    cin>>n;
    if(n==1){
        cout<<"1"<<endl;
    }
    else {
        for(i=0;i<n;i++){
            c[i]=0;
            for(j=0;j<n;j++){
                cin>>a[i][j];
                if(a[i][j]==0){
                    temp=i;
                }
                else {
                    c[i]=c[i]+a[i][j];
                }
            }
        }
        if(temp==0){
            t=c[1]-c[0];
            c[0]=c[0]+t;
        }
        else {
            t=c[0]-c[temp];
            c[temp]=c[temp]+t;
        }
        for(i=0;i<n-1;i++){
            if(c[i]!=c[i+1]){
                cout<<"-1"<<endl;
                return 0;
            }
        }
        for(i=0;i<n;i++){
            b[i]=0;
            for(j=0;j<n;j++){
                if(a[j][i]==0){
                    a[j][i]=t;
                }
                b[i]=b[i]+a[j][i];
            }
        }
        /*for(i=0;i<n;i++){
            cout<<b[i]<<endl;
        }*/
        for(i=0;i<n-1;i++){
            if(b[i]!=b[i+1]){
                cout<<"-1"<<endl;
                return 0;
            }
        }
        b[500]=0;
        c[500]=0;
        j=n-1;
        for(i=0;i<n;i++){
            b[500]=b[500]+a[i][i];
            c[500]=c[500]+a[i][j];
            j--;
        }
        if(b[500]!=c[500]){
            //cout<<b[500]<<" "<<c[500]<<endl;
            cout<<"-1"<<endl;
            return 0;
        }
        cout<<t<<endl;
    }
    return 0;
}
