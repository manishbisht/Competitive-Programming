#include <bits/stdc++.h>
using namespace std;
long long int t, a, b, n, k, i, j, l, ans;
long long int power(long long int x, long long int y)
{
    long long int temp;
    if( y == 0)
       return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
    {
        if(y > 0)
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}
int main()
{
    ifstream input;
    input.open("B-small-attempt2.in");
    ofstream output;
    output.open("output.out");
	input>>t;
	for(i=0;i<t;i++){
        input>>a>>b>>n>>k;
        ans=0;
        for(j=0;j<n;j++){
            for(l=0;l<n;l++){
                if(i!=j && (power(j+1, a))+(power(l+1, b))%k==0){
                    ans++;
                }
            }
        }
        if(ans==0 && a==0 && b==0){
            ans=n*(n-1)*2;
        }
        ans=ans%1000000007;
        //output<<a<<" "<<b<<" "<<n<<" "<<k<<endl;
        output<<"Case #"<<i+1<<": "<<ans<<endl;
	}
    return 0;
}
