#include <bits/stdc++.h>
using namespace std;
long long int n, q, a, b, c, i, j, k, temp, cc;
vector<int> v;
int main()
{
    cin>>n>>q;
    for(i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    for(i=0;i<q;i++){
        cin>>a>>b>>c;
        if(a==1){
            v[b-1]=c;
        }
        else {
            for(k=b-1;k<c;k++){
                cout<<v[k]<<" ";
            }
            cout<<endl;
            cc=0;
            for(k=b-1;k<c;k++){
                temp=count(v.begin()+b, v.begin()+c, v[k]);
                if(temp>cc){
                    cc=temp;
                }
                cout<<temp<<" "<<v[k]<<endl;
            }
            cout<<cc<<endl;
            if(cc>floor((c-b+1)/2)){
                cout<<"Yes "<<floor((c-b+1)/2)<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
