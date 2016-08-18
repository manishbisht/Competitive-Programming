#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
long long int t, i, j, k, found, c;
//vector <char> v;
string s;
int main()
{
    ifstream input;
    input.open("B-large.in");
    ofstream output;
    output.open("output.out");
	input>>t;
	for(i=0;i<t;i++)
    {
        input>>s;
        c=0;
        found=s.find('-');
        while(found>=0 && found<s.length())
        {
            for(j=s.length();j>=0;j--)
            {
                if(s[j-1]=='-')
                {
                    break;
                }
            }
            for(k=0;k<j;k++)
            {
                if(s[k]=='+')
                {
                    s[k]='-';
                }
                else
                {
                    s[k]='+';
                }
             }
             found=s.find('-');
             c++;
        }
        output<<"Case #"<<i+1<<": "<<c<<endl;
    }
    return 0;
}
