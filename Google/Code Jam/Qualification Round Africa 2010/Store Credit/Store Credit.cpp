#include <bits/stdc++.h>
using namespace std;
long long int t, c, n, i, j, k, temp;
vector<int> v;
int main()
{
    ifstream input;
    input.open("A-large-practice.in");
    ofstream output;
    output.open("output.out");
	input>>t;
	for(i=0;i<t;i++)
    {
        input>>c>>n;
        v.clear();
        for(j=0;j<n;j++){
            input>>temp;
            v.push_back(temp);
        }
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++){
                if((v[j]+v[k])==c){
                    output<<"Case #"<<i+1<<": "<<j+1<<" "<<k+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
