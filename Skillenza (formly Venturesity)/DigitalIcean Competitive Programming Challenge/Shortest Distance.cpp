#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, i, j, k, temp, sum, x, y, p;
    vector<long long int> a[2];
    cin>>t;
    for(k = 0; k < t; k++){
        a[0].clear();
        a[1].clear();
        cin>>n;
        for(i = 0; i < n; i++){
            cin>>temp;
            a[0].push_back(temp);
        }
        cin>>n;
        for(i = 0; i < n; i++){
            cin>>temp;
            a[1].push_back(temp);
        }
        i = a[0].size()-1;
        j = a[1].size()-1;
        x = i;
        y = j;
        sum = 0;
        temp = 0;
        p = 0;
        if(a[0][i] < a[1][j]){
            temp = 0;
        }
        else if(a[0][i] > a[1][j]){
            temp = 1;
        }
        while(x >= 0 && y >= 0){
            if(a[0][x] == a[1][y]){
                if(x < y){
                    temp = 0;
                }
                else if(y < x){
                    temp = 1;
                }
                x--;
                y--;
            }
            else if(a[0][x] < a[1][y]){
                y--;
            }
            else {
                x--;
            }
            if(temp == 0 && p != a[temp][i]){
                p = a[temp][i];
                sum = sum + a[temp][i];
            }
            else if(p != a[temp][j]){
                p = a[temp][j];
                sum = sum + a[temp][j];
            }
            i = x;
            j = y;
        }
        cout<<sum<<endl;
    }
    return 0;
}
