#include <bits/stdc++.h>

bool IsPrime(int n) {
  if (n %2 == 0) {
    return false;
  }
  for (int i = 3; i <= sqrt(n); i+=2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int FindNextPrime(int x) {
  if (x == 2) {
    return 3;
  }
  for (int num = x+2; num <= x*x; ++num) {
    if (IsPrime(num)) {
      return num;
    }
  }
  return -1;
}

int main() {
  int x, y;
  std::cin >> x >> y;
  if (FindNextPrime(x) == y) {
    std::cout << "YES" << std::endl;
  }
  else {
    std::cout << "NO" << std::endl;
  }
}