#include <bits/stdc++.h>
using namespace std;
long long int t, n, i, j;
string s, temp;
vector<string> v;
int main()
{
    ifstream input;
    input.open("B-large-practice.in");
    ofstream output;
    output.open("output.out");
	input>>t;
	getline(input, s);
	for(i=0;i<t;i++){
        getline(input, s);
        temp="";
        v.clear();
        for(j=0;j<s.length();j++){
            if(s[j]==32){
                v.push_back(temp);
                temp="";
            }
            else{
                temp=temp+s[j];
            }
        }
        v.push_back(temp);
        for(j=0;j<v.size()/2;j++){
            temp=v[j];
            v[j]=v[v.size()-1-j];
            v[v.size()-1-j]=temp;
        }
        output<<"Case #"<<i+1<<": ";
        for(j=0;j<v.size();j++){
            output<<v[j]<<" ";
        }
        output<<endl;
	}
    return 0;
}
