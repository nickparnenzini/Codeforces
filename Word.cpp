#include <bits/stdc++.h>

int main() {
  std::string s;
  std::cin >> s;
  int count_low = 0;
  int count_up = 0;
  for (int i = 0; i < s.length(); ++i) {
    if (std::islower(s[i])) {
      count_low++;
    }
    else {
      count_up++;
    }
  }
  if (count_low >= count_up) {
    for (int i = 0; i < s.length(); ++i) {
      s[i] = std::tolower(s[i]);
    }
  }
  else {
    for (int i = 0; i < s.length(); ++i) {
      s[i] = std::toupper(s[i]);
    }
  }
  std::cout << s << std::endl;
}