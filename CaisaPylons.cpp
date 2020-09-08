#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> h{};
  for (int i = 0; i < n; ++i) {
    int f;
    std::cin >> f;
    h.push_back(f);
  }
  int m = *std::max_element(h.begin(), h.end());
  int e = m;
  for (int i = 0; i < n; ++i) {
    if (e < 0) {
      m += (h[i]-h[i+1]);
      e += abs(h[i]-h[i+1]);
    }
    else {
      e += (h[i]-h[i+1]);
    }
  }
  std::cout << m << std::endl;
}