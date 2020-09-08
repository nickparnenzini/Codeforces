#include <bits/stdc++.h>

#define ll long long int

ll sum(ll n) {
  ll sum = 0;
  while (n) {
    sum += n%10;
    n /= 10;
  }
  return sum;
}

int main() {
  std::string s;
  std::cin >> s;
  if (s.size() == 1) {
    std::cout << 0 << std::endl;
    return 0;
  }
  ll cnt = 0;
  char a;
  for (int i = 0; i < s.size(); ++i) {
    a = s[i];
    cnt +=a-'0';
  }
  int ans = 0;
  while (cnt > 9) {
    cnt = sum(cnt);
    ans++;
  }
  std::cout << ans+1 << std::endl;
}