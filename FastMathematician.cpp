#include <bits/stdc++.h>

int main() {
  std::string a, b;
  std::cin >> a >> b;
  for (int i = 0; i < a.length(); ++i) {
    int num = (a[i]-'0') ^ (b[i]-'0');
    a[i] = (num + '0');
  }
  std::cout << a << std::endl;
}