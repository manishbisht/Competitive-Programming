#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(long long int i=0;i<100;i++){
        long long int a = rand() % 100;
        cout<<a<<": ";
        cout<<setbase(2)<<a<<", ";
        cout<<setbase(4)<<a<<", ";
        cout<<setbase(8)<<a<<", ";
        cout<<setbase(16)<<a<<endl;
        cout<<setbase(10);
    }
    return 0;
}
