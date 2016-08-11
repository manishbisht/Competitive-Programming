#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
long long int t, n, i, j, temp,c;
vector <long long int> v;
int main()
{
    ifstream input;
    input.open("A-large.in");
    ofstream output;
    output.open("output.out");
	input>>t;
	for(i=0;i<t;i++)
    {
        input>>n;
        if(n==0)
        {
            output<<"Case #"<<i+1<<": INSOMNIA"<<endl;
            continue;
        }
        v.clear();
        temp=n;
        for(; n; n/=10)
        {
            sort(v.begin(), v.end());
            if(!binary_search(v.begin(), v.end(), n%10))
            {
                v.push_back(n%10);
            }
        }
        c=1;
        while(v.size()<10)
        {
            c++;
            n=temp*c;
            for(; n; n/=10)
            {
                sort(v.begin(), v.end());
                if(!binary_search(v.begin(), v.end(), n%10))
                {
                    v.push_back( n%10 );
                }
            }
        }
        output<<"Case #"<<i+1<<": "<<c*temp<<endl;
    }
    return 0;
}
