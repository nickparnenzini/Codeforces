#include <bits/stdc++.h>

int main() {
  int n, m;
  std::cin >> n >> m;
  std::priority_queue<std::pair<int,int>> pq;
  for (int i  = 0; i < m; ++i) {
    int a, b;
    std::cin >> a >> b;
    pq.push({b,a});
  }
  int boxes = 0;
  int ans = 0;
  while (!pq.empty()) {
    int val = pq.top().first;
    int b = pq.top().second;
    int min_b = std::min(b, n-boxes);
    ans += (val*min_b);
    pq.pop();
    boxes += min_b;
    if (boxes == n) {
      break;
    }
  }
  std::cout << ans << std::endl;
}