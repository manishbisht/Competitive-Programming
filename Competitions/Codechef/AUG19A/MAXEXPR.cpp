/*
 Problem Link: https://www.codechef.com/AUG19A/problems/MAXEXPR
 Concepts Used: Lagrangre's Method of Undetermined Multipliers
 */


#include <bits/stdc++.h>
using namespace std;
int main(){
  int testc;
  cin >> testc;
   while(testc--){
        int n;
        cin >> n;
        double k[n+1];
        double c[n+1];
        double x[n+1];
        for(int i = 1;i<=n;i++) scanf("%lf",k+i);
        for(int i = 1;i<=n;i++) scanf("%lf",c+i);
        int indicator = 0;
       for(int i = 1;i<=n;i++){
            if( c[i] != 0){
              indicator = 1;
              break;
            }
          }
      if( indicator == 0) {
          for(int i =0;i<n+1;i++) cout << 0 <<" ";
          cout <<endl;
      }
     else {
      double undetmultiplier =0.0;
      double harmonic =0.0;
      for(int i =1;i<=n;i++) undetmultiplier += (double)k[i]*c[i];
     for(int i =1;i<=n;i++) harmonic = harmonic + (1.0/k[i]);
     undetmultiplier = (double)undetmultiplier/harmonic;
     for(int i =1;i<=n;i++) {
       x[i] = (undetmultiplier/(double)(k[i]*k[i])) - c[i];
     }
    double result= 0;
    bool imposs= false;
    for(int i =1;i<=n;i++){
      if( x[i] +c[i] >= 0) result = result + sqrt(x[i]+c[i]);
      else {imposs= true; break;}
    }
    if( imposs== true) cout << -1 <<endl;
    else {
      cout <<fixed<<setprecision(15)<<result<<" ";
      for(int i =1;i<=n;i++) cout <<fixed<<setprecision(15)<<x[i]<<" ";
      cout<<endl;
    }
     }
   }
  return 0;
}

