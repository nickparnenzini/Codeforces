#include <bits/stdc++.h>

int main() {
  std::string s("ABC");
  std::map<char,int> m;
  m['A'] = 0;
  m['B'] = 0;
  m['C'] = 0;
  for (int i = 0; i < 3; ++i) {
    std::string d;
    std::cin >> d;
    char c1 = d[0];
    char c2 = d[2];
    if (d[1] == '>') {      
      m[c1]++;
    }
    else  {
      m[c2]++;
    }
  }
  if (m['A'] == m['B']  || m['A'] == m['C'] || m['B'] == m['C']) {
    std::cout << "Impossible" << std::endl;
    return 0;
  }
  for (auto it = m.begin(); it != m.end(); ++it) {
    s[it->second] = it->first;
  }
  std::cout << s << std::endl;
}