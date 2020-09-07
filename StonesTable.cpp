#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  int first = 0;
  int count = 0;
  for (int i = 1; i < s.length(); ++i) {
    if (s[i] == s[first]) {
      count++;
    }
    else {
      first = i;
    }
  }
  std::cout << count << std::endl;
}