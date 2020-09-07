#include <bits/stdc++.h>

int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<int> arr;
  std::queue<std::pair<int,int>> q;
  for (int i = 0; i < n; ++i) {
    int f;
    std::cin >> f;
    arr.push_back(f);
    q.push({0,i});
  }
  int last = -1;
  while (!q.empty()) {
    int candies = q.front().first;
    int idx = q.front().second;
    q.pop();
    if (candies+m < arr[idx]) {
      q.push({candies+m, idx});
    }
    else {
      last = idx+1;
    }
  }
  std::cout << last << std::endl;
}