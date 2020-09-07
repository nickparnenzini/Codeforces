#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  std::cin >> n;
  std::vector<int> arr;
  for (int i = 0; i < n; ++i) {
    int x;
    std::cin >> x;
    arr.push_back(x);
  }
  std::sort(arr.begin(), arr.end());
  int first = 0;
  int students = 0;
  int second = 0;
  int count = 0;
  for (; second < n; ++second) {
    if (arr[second] <= arr[first]+5) {
      count++;
    }
    else {
      students = max(students, count);
      first = second;
      count = 1;
    }
    students = max(students, count);
  }
  students = max(students, count);
  std::cout << students << std::endl;
}