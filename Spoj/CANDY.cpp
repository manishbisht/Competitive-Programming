#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, n, i, j, ans, a[10000], sum;
	cin>>n;
	while(n!=-1){
        ans = 0;
        sum = 0;
        for(j=0;j<n;j++){
            cin>>a[j];
            sum = sum + a[j];
        }
        if(sum % n != 0){
            ans = -1;
        }
        else {
            sum = sum / n;
            for(j=0;j<n;j++){
                ans = ans + abs(a[j]-sum);
            }
            ans = ans / 2;
        }
        cout<<ans<<endl;
        cin>>n;
	}
    return 0;
}
