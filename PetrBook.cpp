#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> arr(7,0);
  for (int i = 0; i < 7; ++i) {
    std::cin >> arr[i];
  } 
  int day = 0;
  while (n) {
    n -= arr[day];
    day = (day+1)%7;
    if (n < 0) {
      break;
    }
  }
  if (day == 0) {
    day = 7;
  }
  std::cout << day << std::endl;

}
