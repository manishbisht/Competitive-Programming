#include <bits/stdc++.h>
using namespace std;
class AlternatingString {
   public :
       int maxLength(string s){
       int ans, temp, i;
       if(s.length()==1){
            ans = 1;
       }
       else {
            temp=1;
            ans=0;
            for(i=0;i<s.length()-1;i++){
                if(s[i]!=s[i+1]){
                    temp++;
                }
                else{
                    temp=1;
                }
                if(ans<temp){
                    ans = temp;
                }
            }
        }
       return ans;
	}
};
int main(){
    AlternatingString A;
    cout<<A.maxLength("111101111")<<endl;
    cout<<A.maxLength("1010101")<<endl;
    cout<<A.maxLength("000011110000")<<endl;
    cout<<A.maxLength("1011011110101010010101")<<endl;
    cout<<A.maxLength("0")<<endl;
}
