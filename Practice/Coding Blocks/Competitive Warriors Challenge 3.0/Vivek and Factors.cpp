#include<iostream>
#define val 110000
using namespace std;
int main() {
	long int a[val]={0}, i, j, t, x, ans;
    for(i=1; i<val; i++){
        for(j=i; j<val; j+=i)
            a[j] += i;
    }
    cin>>x;
    while(x != 0){
        ans = -1;
        for(i=1; i<val; i++){
            if(a[i] == x){
                ans = i;
            }
        }
        cout<<ans<<endl;
        cin>>x;
    }
}
