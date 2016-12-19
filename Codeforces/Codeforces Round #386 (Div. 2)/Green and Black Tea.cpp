#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d, i, j, tt;
    map<char, long long int> m;
    string s="";
    char cc;
    cin>>a>>b>>c>>d;
    m['G']=c;
    m['B']=d;
    if(c>b){
        cc='G';
    }
    else {
        cc='B';
    }
    tt=0;
    i=0;
    while(i<a){
            //cout<<i<<a<<m[cc]<<endl;
        if(tt<b && m[cc]>0){
                if(m['G']==m['B']){
            b = m['G'];
        }else{
            cout<<cc;
            m[cc]=m[cc]-1;
            tt++;
            i++;}
        }
        else{
            if(cc=='G'){
                cc='B';
            }
            else {
                cc='G';
            }
            tt=0;
        }
    }
    return 0;
}
