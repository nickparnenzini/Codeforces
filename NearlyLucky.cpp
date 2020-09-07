#include <bits/stdc++.h>

bool IsLucky(int n) {
  while(n) {
    int digit = n%10;
    if (digit != 4 && digit != 7) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main() {
  std::string s;
  std::cin >> s;
  int num = 0;
  for (int i  = 0; i < s.length(); ++i) {
    if (s[i] == '4' || s[i] == '7') {
      ++num;
    }
  }
  if (num != 0 && IsLucky(num)) {
    std::cout << "YES" << std::endl;
  }
  else {
    std::cout << "NO" << std::endl;
  }
}
