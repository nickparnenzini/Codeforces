#include <bits/stdc++.h>

int main() {
  int n; 
  std::cin >> n;
  std::string cols("GBIV");
  int i = 3;
  std::string ans("ROY");
  while (i < n) {
    ans.push_back(cols[i%4]);
    ++i;
  }
  std::cout << ans << std::endl;
}