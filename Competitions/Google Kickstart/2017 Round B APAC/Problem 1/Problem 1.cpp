#include <bits/stdc++.h>
using namespace std;
long long int t, a, b, ans, i;
set<char> c;
int main()
{
    ifstream input;
    input.open("A-large.in");
    ofstream output;
    output.open("output.out");
	input>>t;
	for(i=0;i<t;i++){
        input>>a>>b;
        if(a<b){
            ans=a;
        }
        else if(a>b){
            ans=b;
        }
        else {
            ans=a;
        }
        ans=ans+((ans*(ans-1))/2);
        //output<<a<<" "<<b<<endl;
        output<<"Case #"<<i+1<<": "<<ans<<endl;
	}
    return 0;
}
