#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("B-small-attempt0.in", "r", stdin);
	freopen("output2.out", "w", stdout);
    long long int t, n, i, j, k, r;
    string a, b;
    cin>>t;
    for(i=0;i<t;i++){
        cout<<"Case #"<<i+1<<": ";
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;
        j = 0;
        k = 0;
        r = 0;
        while(j < a.length() && k < b.length()){
            /*if(a[j] == b[k] && a[j] == '*'){

            }
            else */if(a[j] == b[k]){
                j++;
                k++;
            }
            else if(a[j] == '*'){
                j++;
                if(a[j] == b[k]){
                    k++;
                }
                else if(a[j] == b[k+1]){
                    k += 1;
                }
                else if(a[j] == b[k+2]){
                    k += 2;
                }
                else if(a[j] == b[k+3]){
                    k += 3;
                }
                else{
                    k += 4;
                }
            }
            else if(b[k] == '*'){
                k++;
                if(a[j] == b[k]){
                    j++;
                }
                else if(a[j+1] == b[k]){
                    j += 1;
                }
                else if(a[j+2] == b[k]){
                    j += 2;
                }
                else if(a[j+3] == b[k]){
                    j += 3;
                }
                else {
                    j += 4;
                }
            }
            else {
                r = 1;
                break;
            }
        }
        if(r == 0){
            cout<<"TRUE"<<endl;
        }
        else {
            cout<<"FALSE"<<endl;
        }
    }
    return 0;
}
