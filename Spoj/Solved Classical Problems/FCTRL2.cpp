#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, n, i, j, a[200], temp, rem, m, k;
	cin>>t;
	for(i=0;i<t;i++){
        cin>>n;
        for(j=0;j<200;j++){
            a[j]=0;
        }
        temp = n;
        j=0;
        m=0;
        while(temp>9){
            a[j] = temp % 10;
            temp = temp / 10;
            j++;
            m++;
        }
        a[j] = temp;
        rem = 0;
        for(j=2;j<n;j++){
            temp = 0;
            for(k=0;k<=m;k++){
                rem = a[k]*j + temp;
                a[k] = rem % 10;
                temp = rem / 10;
            }
            while(temp!=0){
                a[k] = temp % 10;
                temp = temp / 10;
                k++;
                m++;
            }
        }
        for(j=m;j>=0;j--){
            cout<<a[j];
        }
        cout<<endl;
	}
    return 0;
}
