#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  std::cin >> n >> t;
  std::string s;
  std::cin >> s;
  while (t--) {
    for (int i = 0; i < s.length()-1;) {
      if (s[i] == 'B' && s[i+1] == 'G') {
        std::swap(s[i],s[i+1]);
        i += 2;
      }
      else {
        ++i;
      }
    }
  }
  std::cout << s << std::endl;
}