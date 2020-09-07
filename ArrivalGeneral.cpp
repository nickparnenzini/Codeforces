#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  int val;
  std::cin >> val;
  std::vector<int> arr(1,val);
  int ma = 1, mi = 1;
  for (int i = 2; i <= n; ++i) {
    int x;
    std::cin >> x;
    arr.push_back(x);
    if (arr[i] > arr[ma]) {
      ma = i;
    }
    if (arr[i] <= arr[mi]) {
      mi = i;
    }
  }
  if (ma > mi) {
    std::cout << ma+n-mi-2 << std::endl;
  }
  else {
    std::cout << ma+n-mi-1 << std::endl;
  }
}