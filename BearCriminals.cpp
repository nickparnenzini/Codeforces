#include <bits/stdc++.h>

int main() {
  int n, a;
  std::cin >> n >> a;
  std::vector<int> arr;
  for (int i = 0; i < n; ++i) {
    int f;
    std::cin >> f;
    arr.push_back(f);
  }
  a--;
  int l = a-1; 
  int r = a+1;
  int ans = arr[a];
  while (l >= 0 && r < n) {
    int c = arr[l--] + arr[r++];
    if (c == 2) {
      ans += c;
    }
  }
  while (l >= 0) {
    ans += arr[l--];
  }
  while (r < n) {
    ans += arr[r++];
  }
  std::cout << ans << std::endl;
}