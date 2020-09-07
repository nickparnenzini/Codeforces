#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  if (n % 2 != 0) {
    std::cout << -1 << std::endl;
  }
  else {
    std::vector<int> arr;
    for (int i = 1; i <= n; ++i) {
      arr.push_back(i);
    }
    for (int i = 0; i < n-1; i+= 2) {
      std::swap(arr[i], arr[i+1]);
    }
    for (auto item : arr) {
      std::cout << item << " ";
    }  
    std::cout << std::endl;
  }
}