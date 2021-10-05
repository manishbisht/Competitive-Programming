#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	
	for(long int i=1; i<=a; i++){
		long int n, k, s;
		cin >> n >> k >> s;
		
		long int answer = min((k + n), ((k - s) + (n - s) + (k - 1) + 1));	
		cout << "Case #" << i << ": " << answer << endl;
	}
}
