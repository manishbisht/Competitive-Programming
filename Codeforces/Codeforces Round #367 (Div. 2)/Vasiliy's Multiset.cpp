#include <bits/stdc++.h>
using namespace std;
long long int n, i, a, temp, ans;
char c;
multiset<long long int> v;
int main()
{
    cin>>n;
    v.insert(0);
    for(i=0;i<n;i++){
        cin>>c>>a;
        if(c=='+'){
            v.insert(a);
        }
        else if(c=='-'){
            v.erase(v.equal_range(a).first);
        }
        else {
            std::multiset<long long int>::const_iterator it=v.begin();
            temp=*it;
            ans=temp^a;
            it++;
            for (;it != v.end();++it){
                temp=*it;
                if(ans<(*it^a)){
                    ans=temp^a;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
