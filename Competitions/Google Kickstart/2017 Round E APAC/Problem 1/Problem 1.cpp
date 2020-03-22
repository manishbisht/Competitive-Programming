#include <bits/stdc++.h>
using namespace std;
long long int t, i, j, c, a, b, ans, l;
string s;
int main()
{
    ifstream input;
    input.open("A-large.in");
    ofstream output;
    output.open("output.out");
    input>>t;
    for(i=0;i<t;i++){
        input>>s;
        c=0;
        ans=0;
        l=s.length();
        for(j=0;j<l;j++){
            if(s[j]=='B'){
                c++;
            }
        }
        input>>a>>b;
        a--;
        b--;
        ans=ans+((b/l)*c);
        ans=ans-((a/l)*c);
        a=a%l;
        b=b%l;
        for(j=0;j<a;j++){
            if(s[j]=='B'){
                ans--;
            }
        }
        for(j=0;j<=b;j++){
            if(s[j]=='B'){
                ans++;
            }
        }
        output<<"Case #"<<i+1<<": "<<ans<<endl;
    }
    return 0;
}
