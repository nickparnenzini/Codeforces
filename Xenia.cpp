#include <bits/stdc++.h>

#define lli long long int

int main() {
  lli n, m;
  std::cin >> n >> m;
  lli t = 0;
  lli prev = 1;
  std::vector<lli> tasks;
  for (int i = 0; i < m; ++i) {
    int f;
    std::cin >> f;
    tasks.push_back(f);
  }
  for (int i = 0; i < m; ++i) {
    if (tasks[i] > prev) {
      t += (tasks[i]-prev);
    }
    else if (tasks[i] < prev) {
      t += (n-prev+tasks[i]);
    }
    prev = tasks[i];
  }
  std::cout << t << std::endl;
}