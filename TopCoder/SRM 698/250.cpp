#include <bits/stdc++.h>
using namespace std;
class Initials {
   public : string getInitials(string s){
   string c="";
   c.push_back(s[0]);
   for(int i=1;i<s.length();i++){
        if(s[i]==' '){
            c.push_back(s[i+1]);
        }
	}
	return c;
}
};
