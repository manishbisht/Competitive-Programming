#include <bits/stdc++.h>
#define NO_OF_CHARS 256
using namespace std;
int lengthOfLongestSubstring(string s) {
  int n = s.length();
  int i = 0, j = 0;
  int maxLen = 0;
  bool exist[256] = { false };
  while (j < n) {
    if (exist[s[j]]) {
      maxLen = max(maxLen, j-i);
      while (s[i] != s[j]) {
        exist[s[i]] = false;
        i++;
      }
      i++;
      j++;
    } else {
      exist[s[j]] = true;
      j++;
    }
  }
  maxLen = max(maxLen, n-i);
  return maxLen;
}
int main()
{
	long long int n;
    string s;
	cin>>n>>s;
	cout<<lengthOfLongestSubstring(s)<<endl;
    return 0;
}
