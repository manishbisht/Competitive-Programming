#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
long long int t, i, j;
string s, s1;
int main()
{
    ifstream input;
    input.open("A-large.in");
    ofstream output;
    output.open("output.out");
	//input>>t;
	input>>t;
	for(i=0;i<t;i++)
    {
        input>>s;
        s1=s[0];
        for(j=1;j<s.length();j++)
        {
            if(s1[0]<=s[j])
            {
                s1=s[j]+s1;
            }
            else
            {
                s1+=s[j];
            }
        }
        output<<"Case #"<<i+1<<": "<<s1<<endl;
    }
    return 0;
}
