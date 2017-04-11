#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("sample-input.txt", "r", stdin);
	//freopen("output-after.txt", "w", stdout);
    long long int t, n, i, j, temp;
    long double m, v, a[105];
    cin>>t;
    for(i = 0; i < t; ++i) {
        cout<<"Case #"<<i+1<<": ";
        cin>>n;
        m = 0;
        for(j = 0; j < n; ++j) {
            cin>>a[j];
            m = m + a[j];
        }
        m = m / n;
        v = 0;
        for(j = 0; j < n; ++j){
            temp = a[j] - m;
            v = v + temp * temp;
        }
        v = v / n;
        temp = v;
        //cout<<m<<endl<<v<<endl;
        if(temp==0){
            for(j = 0; j < n; ++j) {
                cout<<50.000000<<" ";
            }
        }
        else {
            v = sqrt(v);
            for(j = 0; j < n; ++j) {
                cout<<fixed<<setprecision(13)<<50+10*((a[j]-m)/v)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
