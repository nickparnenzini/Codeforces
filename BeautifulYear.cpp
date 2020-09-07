#include <bits/stdc++.h>

bool IsUnique(int n) {
  std::unordered_map<int,int> m;
  while (n) {
    int val = n%10;
    if (m.find(val) != m.end()) {
      return false;
    }
    m[val]++;
    n /= 10;
  }
  return true;
}

int main() {
  int year;
  std::cin >> year;
  int next  = year+1;
  while (true) {
    if (IsUnique(next)) {
      std::cout << next << std::endl;
      break;
    }
    ++next;
  }
}