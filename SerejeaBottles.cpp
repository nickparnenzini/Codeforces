#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  std::cin >> n;
  vector<int> a, b;
  for (int i = 0; i < n; ++i) {
    int f, g;
    std::cin >> f >> g;
    a.push_back(f);
    b.push_back(g);
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (a[i] == b[j] && i != j) {
        ans++;
        break;
      }
    }
  }
  std::cout << n-ans << std::endl;
}