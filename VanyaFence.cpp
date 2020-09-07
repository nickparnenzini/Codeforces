#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h;
  std::cin >> n >> h;
  int min_width = 0;
  for (int i = 0; i < n; ++i) {
    int f;
    std::cin >> f;
    if (f > h) {
      min_width += 2;
    }
    else {
      min_width++;
    }
  }
  std::cout << min_width << std::endl;
}