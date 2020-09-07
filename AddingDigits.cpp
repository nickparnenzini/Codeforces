#include <bits/stdc++.h>

#define lli long long int

int main() {
  lli a, b, n;
  std::cin >> a >> b >> n;
  while (n--) {
    for (int i = 0; i <= 9; i++) {
      if ((a*10+i)%b == 0) {
        std::cout << a << i;
        for(int j=0;j<n;j++) {
          std::cout<<0;
        }
        std::cout << std::endl;
        return 0;
      }
    }
  } 
  std::cout << -1 << std::endl;
}

