#include <bits/stdc++.h>
using namespace std;
long long int t, n, i, j, k, temp;
set<char> c;
int main()
{
    ifstream input;
    input.open("A-large-practice.in");
    ofstream output;
    output.open("output.out");
	input>>t;
	for(i=0;i<t;i++){
        input>>n;
        string s;
        int a;
        vector<pair<int, string> > v;
        getline(input, s);
        for(j=0;j<n;j++){
            getline(input, s);
            c.clear();
            for(k=0;k<s.length();k++){
                if(s[k]!=32){
                    c.insert(s[k]);
                }
            }
            v.push_back(make_pair(c.size(), s));
        }
        sort(v.begin(), v.end());
        temp=v[n-1].first;
        for(j=0;j<v.size();j++){
            if(v[j].first==temp){
                s=v[j].second;
                break;
            }
        }
        output<<"Case #"<<i+1<<": "<<s<<endl;
	}
    return 0;
}
