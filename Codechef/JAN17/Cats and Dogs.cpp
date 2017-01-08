#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, c, i, j, temp;
    cin>>t;
    for(i = 0; i < t; i++){
        cin>>b>>a>>c;
        if(a == 0 && b == 0 && c == 0){
            cout<<"yes"<<endl;
        }
        else if(c % 4 == 0){
            if(b - 2 * a > 0){
                temp = ((b - 2 * a) + a) * 4;
            }
            else {
                temp = 4 * a;
            }
            if(c >= temp && c <= (a + b) * 4){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
