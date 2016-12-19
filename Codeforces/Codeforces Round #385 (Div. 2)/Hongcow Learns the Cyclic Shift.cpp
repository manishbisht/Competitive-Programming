#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i;
    char c;
    string s;
    set<string> v;
    cin>>s;
    v.insert(s);
    for(i=0;i<s.length()-1;i++){
        c = s.back();
        s.pop_back();
        s.insert(s.begin(), c);
        v.insert(s);
    }
    cout<<v.size()<<endl;
    return 0;
}
