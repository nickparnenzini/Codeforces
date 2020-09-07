#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  int a = 0, d = 0; 
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'A') {
      a++;
    }
    else {
      d++;
    }
  }
  if (a > d) {
    std::cout << "Anton" << std::endl;
  }
  else if (d > a) {
    std::cout << "Danik" << std::endl;
  }
  else {
    std::cout << "Friendship" << std::endl;
  }
}