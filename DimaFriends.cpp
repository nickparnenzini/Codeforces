#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  int total = 0;
  for (int i = 0; i < n; ++i) {
    int f;
    std::cin >> f;
    total += f;
  }
  int ans = 0;
  for (int i = 1; i <= 5; i++) {
    if ((total+i)%(n+1) != 1) {
      ans++;
    }
  }
  std::cout << ans << std::endl;
}
  