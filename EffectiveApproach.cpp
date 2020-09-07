#include <bits/stdc++.h>

#define ll long long

int main() {
  int n;
  std::cin >> n;
  std::vector<int> arr;
  std::unordered_map<int,int> m;
  for (int i = 0; i < n; ++i) {
    int x;
    std::cin >> x;
    arr.push_back(x);
    m[x] = i+1;
  }
  int q;
  std::cin >> q;
  ll s1 = 0;
  ll s2 = 0;
  while (q--) {
    int num;
    std::cin >> num;
    auto it = m.find(num);
    if (it != m.end()) {
      s1 += it->second;
      s2 += (n-it->second+1);
    }
  }
  std::cout << s1 << " " << s2 << std::endl;
}