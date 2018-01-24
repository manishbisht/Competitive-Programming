#include <bits/stdc++.h>
using namespace std;
double b[4];
int i;
int main()
{
    for(i=0;i<4;i++){
        cin>>b[i];
    }
    if(b[0]/b[2]==b[1]/b[3]){
        cout<<"Possible"<<endl;
    }
    else if(b[0]/b[2]==b[3]/b[1]){
        cout<<"Possible"<<endl;
    }
    else if(b[0]/b[3]==b[1]/b[2]){
        cout<<"Possible"<<endl;
    }
    else if(b[0]/b[3]==b[3]/b[1]){
        cout<<"Possible"<<endl;
    }
    else if(b[2]/b[0]==b[1]/b[3]){
        cout<<"Possible"<<endl;
    }
    else if(b[2]/b[0]==b[3]/b[1]){
        cout<<"Possible"<<endl;
    }
    else if(b[3]/b[0]==b[1]/b[2]){
        cout<<"Possible"<<endl;
    }
    else if(b[0]/b[3]==b[3]/b[1]){
        cout<<"Possible"<<endl;
    }
    else {
        cout<<"Impossible"<<endl;
    }
    return 0;
}
