#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, a[7];
    string s;
    cin>>s;
    for(i = 0; i < 7; i++){
        a[i] = 0;
    }
    for(i = 0; i < s.length(); i++){
        if(s[i] == 'B'){
            a[0]++;
        }
        else if(s[i] == 'u'){
            a[1]++;
        }
        else if(s[i] == 'l'){
            a[2]++;
        }
        else if(s[i] == 'b'){
            a[3]++;
        }
        else if(s[i] == 'a'){
            a[4]++;
        }
        else if(s[i] == 's'){
            a[5]++;
        }
        else if(s[i] == 'r'){
            a[6]++;
        }
    }
    a[1] = a[1] / 2;
    a[4] = a[4] / 2;
    cout<<*min_element(a, a+7)<<endl;
    return 0;
}
