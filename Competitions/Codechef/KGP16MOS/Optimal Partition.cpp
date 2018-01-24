#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, k, a[100005], i, j, temp, ans ;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        ans = 0;
        sort(a, a+n);
        reverse(a, a+n);
        temp = n / k;
        if(temp*k!=n){
            k--;
            cout<<*max_element(a+(k*temp), a+n)<<" "<<*min_element(a+(k*temp), a+n)<<endl;
            ans = ans + *max_element(a+(k*temp), a+n) - *min_element(a+(k*temp), a+n);
        }
        for(j=0;j<k;j++){
            cout<<*max_element(a+(j*temp), a+((j+1)*temp))<<" "<<*min_element(a+(j*temp), a+((j+1)*temp))<<endl;
            ans = ans + *max_element(a+(j*temp), a+((j+1)*temp)) - *min_element(a+(j*temp), a+((j+1)*temp));

        }
        cout<<ans<<endl;
    }
    return 0;
}
