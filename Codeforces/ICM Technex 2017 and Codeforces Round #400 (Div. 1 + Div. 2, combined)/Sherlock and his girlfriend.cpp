#include <bits/stdc++.h>
using namespace std;
int prime[1000005];
void Sieve(long long int n){
    long long int j;
    prime[0] = 0;
    prime[1] = 0;
    for(long long int i=2;i<1000005;i++)
        prime[i] = 1;
    long long int m = sqrt(n);
    for(long long int i=2;i<=m;i++)
        if(prime[i] == 1){
            j = 2;
            for(long long int k=i*i;k<=n;k+=i)
                prime[k] = j;
                j++;
        }

}
int main()
{
    long long int n, i;
    cin>>n;
    Sieve(n+2);
    cout<<*max_element(prime, prime+n+2)<<endl;
    for(i = 1; i <=n; ++i){
        cout<<prime[i+1]<<" ";
    }
    return 0;
}
