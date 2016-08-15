#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
long long int t, n, a[1000], b[1000], i, j, sum;
int main()
{
    ifstream input;
    input.open("A-large-practice.in");
    ofstream output;
    output.open("output.out");
	input>>t;
	for(i=0;i<t;i++)
    {
        input>>n;
        for(j=0;j<n;j++)
        {
            input>>a[j];
        }
        for(j=0;j<n;j++)
        {
            input>>b[j];
        }
        sort(a, a+n);
        sort(b, b+n);
        reverse(b, b+n);
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+(a[j]*b[j]);
        }
        output<<"Case #"<<i+1<<": "<<sum<<endl;
    }
    return 0;
}
