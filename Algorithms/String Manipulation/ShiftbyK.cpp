#include <bits/stdc++.h>
using namespace std;
string shiftByK(string s, long long int k){
    string temp = s;
    long long int len = s.length();
    for(long long int i=0;i<s.length();i++){
        temp[(i+k)%len]=s[i];
    }
    return temp;
}
int main()
{
    for(long long int i=1;i<=10;i++){
        cout<<i<<": "<<shiftByK("Manish", i)<<endl;
    }
    return 0;
}
