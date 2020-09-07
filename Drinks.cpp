#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  int tot_volume = n*100;
  int orange = 0;
  while (n--) {
    int p;
    std::cin >> p;
    orange += p;
  }
  double percentage = orange/(double)tot_volume;
  std::cout << percentage*100.0 << std::endl;
}