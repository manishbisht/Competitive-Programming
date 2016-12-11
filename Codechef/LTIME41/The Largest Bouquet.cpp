#include <bits/stdc++.h>
using namespace std;
long long int t, i, j, k, a[3][3], temp, ans;
vector<long long int> v;
int main()
{
    cin>>t;
    for(i=0;i<t;i++){
        ans=0;
        v.clear();
        for(j=0;j<3;j++){
            temp=0;
            for(k=0;k<3;k++){
                cin>>a[j][k];
                temp+=a[j][k];
            }
            if(temp%2!=0){
                v.push_back(temp);
            }
        }
        for(j=0;j<3;j++){
            temp=0;
            for(k=0;k<3;k++){
                temp+=a[k][j];
            }
            if(temp%2!=0){
                v.push_back(temp);
            }
        }
        if(v.size()==0){
            cout<<"0"<<endl;
        }
        else {
            cout<<*max_element(v.begin(), v.end())<<endl;
        }
    }
    return 0;
}
