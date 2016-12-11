#include <bits/stdc++.h>
using namespace std;
long long int t, r, c, i, t1, t2, ans;
int main()
{
    ifstream input;
    input.open("B-small-attempt2.in");
    ofstream output;
    output.open("output.out");
    input>>t;
    for(i=0;i<t;i++){
        input>>r>>c;
        //output<<r<<" "<<c<<endl;
        t1=r/3;
        t2=c/3;
        if(r>=3 && c>=3){
            ans=((r-t1)*(c-t2))+((t1*t2)*2);
        }
        else {
            ans=((r-t1)*(c-t2));
        }
        output<<"Case #"<<i+1<<": "<<ans<<endl;
    }
    return 0;
}
