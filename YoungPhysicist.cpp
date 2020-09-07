#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  std::cin >> n;
  int tot_x = 0, tot_y = 0, tot_z = 0;
  while (n--) {
    int x, y, z;
    std::cin >> x >> y >> z;
    tot_x += x;
    tot_y += y;
    tot_z += z;
  }
  if (tot_x == 0 && tot_y == 0 && tot_z == 0) {
    std::cout << "YES" << std::endl;
  }
  else {
    std::cout << "NO" << std::endl;
  }
}