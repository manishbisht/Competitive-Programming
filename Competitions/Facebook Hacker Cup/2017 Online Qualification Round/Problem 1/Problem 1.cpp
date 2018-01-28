#include <bits/stdc++.h>
using namespace std;
double getAngle(pair<double, double> c, pair<double, double> p){
    double result = (atan2(p.second - c.second, p.first - c.first)) * 180 / 3.142857143;
    if(result < 0){
        result += 360;
    }
    return result;
}

double getRadius(pair<double, double> c, pair<double, double> p){
    return (abs(p.first - c.first) * abs(p.first - c.first)) + (abs(p.second - c.second) * abs(p.second - c.second));
}

int main() {
    freopen("progress_pie.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    long long int t, n, i, j, ans, m;
    double angle;
    pair<double, double> p, ss, se, c;
    cin>>t;
    for(i = 0; i < t; i++){
        cout<<"Case #"<<i+1<<": ";
        cin>>m>>p.first>>p.second;
        if(m == 0){
            cout<<"white"<<endl;
        }
        else {
            angle = 3.6 * m;
            c.first = 50;
            c.second = 50;
            if(getAngle(c, p) <= angle && getRadius(c, p) <= 2500){
                cout<<"black"<<endl;
            }
            else {
                cout<<"white"<<endl;
            }
        }
    }
    return 0;
}
