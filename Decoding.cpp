#include <bits/stdc++.h>

#define lli long long int;

int main() {
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  std::string ans = s;
  int i = 0;  
  lli l = n/2-1;
  lli r = n/2+1;
  if (n % 2 == 0 ) {
    r = n/2;
  }
  std::cout << ans << std::endl;
}