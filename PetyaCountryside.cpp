#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  std::cin >> n;
  std::vector<int> arr{};
  int max_water = 0;
  for (int i = 0; i  < n; ++i) {
    int f;
    std::cin >> f;
    arr.push_back(f);
  }
  arr.push_back(0);
  int j = 0, k= 0;
  if (n == 1) {
    std::cout << 1 << std::endl;
    return 0;
  }
  for (int i = 0; i < n; ++i) {
    int count = 1;
    for (int j = i+1; j <=n-1; ++j) {
      if (arr[j] <= arr[j-1]) {
        count++;
      }
      else {
        break;
      }
    }
    for (int j = i-1; j >= 0; j--) {
      if (arr[j] <= arr[j+1]) {
        count++;
      }
      else {
        break;
      }
    }
    max_water = max(max_water,count);
  }
  std::cout << max_water << std::endl;
}