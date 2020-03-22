#include <bits/stdc++.h>
#include <string>
using namespace std;
long long int t, i, a, temp, j, k, c;
string s;
string NumberToString(long long int n){
    ostringstream oOStrStream;
    oOStrStream << n;
    return oOStrStream.str();
}
string numbertobase(long long int n, long long int b){
    string result="";
    while(n>0){
        result = NumberToString(n%b) + result;
        n = n/b;
    }
    return result;
}
int main()
{
    ifstream input;
    input.open("B-small-attempt0.in");
    ofstream output;
    output.open("output.out");
    input>>t;
    for(i=0;i<t;i++){
        input>>a;
        temp=0;
        j=1;
        while(temp==0){
            j++;
            s=numbertobase(a, j);
            c=0;
            for(k=0;k<s.length();k++){
                if(s[k]=='1'){
                    c++;
                }
                else {
                    break;
                }
            }
            if(c==s.length()){
                temp=1;
            }
        }
        output<<"Case #"<<i+1<<": "<<j<<endl;
    }
    return 0;
}
