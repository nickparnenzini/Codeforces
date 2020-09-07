#include <bits/stdc++.h>
using namespace std;

int main() {
  const int n = 5;
  std::vector<std::vector<int>> m(n, std::vector<int>(n,0));
  int row = 0, col = 0;
  const int c_row = 2;
  const int c_col = 2;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int x;
      std::cin >> x;
      if (x == 1) {
        row = i;
        col = j;
      }
    }
  }
  std::cout << abs(row-c_row) + abs(col-c_col) << std::endl;
}