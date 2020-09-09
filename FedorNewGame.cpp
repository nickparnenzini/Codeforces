#include <bits/stdc++.h>

#define lli long long int

int countSetBits(int n) { 
    if (n == 0) 
        return 0;  
    else
        return (n & 1) + countSetBits(n >> 1); 
}

int main() {
  int n, m, k;
  std::cin >> n >> m >> k;
  std::unordered_map<int,unsigned int> h;
  unsigned int fedor =0 ;
  for (int i = 0; i < m; ++i) {
    unsigned int f;
    std::cin >> f;
    h[i+1] = f;
  }
  lli cnt = 0;
  std::cin >> fedor;
  for (int i = 0; i < m; ++i) {
    unsigned int res = fedor ^ h[i+1];
    int bits = countSetBits(res);
    if (bits <= k) {
      ++cnt;
    }
  }
  std::cout << cnt << std::endl;
}