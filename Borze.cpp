#include <bits/stdc++.h>

int main() {
  std::string s;
  std::cin >> s;
  std::string result;
  int i = 0;
  for (; i < s.length()-1;) {
    if (s[i] == '.') {
      result.push_back('0');
      ++i;
    }
    else if (s[i] == '-' && s[i+1] == '.') {
      result.push_back('1');
      i += 2;
    }
    else if (s[i] == '-' && s[i+1] == '-') {
      result.push_back('2');
      i += 2;
    }
  }
  if (i == s.length()-1) {
    result.push_back('0');
  }
  std::cout << result << std::endl;
}