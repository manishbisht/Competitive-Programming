#include <bits/stdc++.h>
using namespace std;
class RepeatStringEasy {
   public : int maximalLength(string s){
       int i, ans;
       ans=0;
       string s1, s2;
       for(i=s.length()/2;i>0;i--){
            s1=s.substr(0, i-1);
            s2=s.substr(i, s.length()-i-1);
            if(s1.find(s2)!=std::string::npos){
                ans=s1.length();
                break;
            }
       }
       ans=ans*2;
       return ans;
   }
};
