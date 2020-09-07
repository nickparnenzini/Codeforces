#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  std::unordered_map<int,std::set<int>> xm;
  std::unordered_map<int,std::set<int>> ym;
  int points = 0;
  std::vector<std::pair<int,int>> arr{};
  while (n--) {
    int x, y;
    std::cin >> x >> y;
    xm[x].insert(y);
    ym[y].insert(x);
    arr.push_back({x,y});
  }
  for (int i = 0; i < arr.size(); ++i) {
    auto it_x = xm.find(arr[i].first);
    auto it_y = ym.find(arr[i].second);
    if (it_x != xm.end() && it_y != ym.end()) {
std::cout << "Found " << std::endl;
      auto y1 = (it_x->second).lower_bound(arr[i].second);
      auto y2 = (it_x->second).lower_bound(arr[i].second);
      auto x1 = (it_y->second).lower_bound(arr[i].first);
      auto x2 = (it_y->second).lower_bound(arr[i].first);
      if (y1 != (it_x->second).end() && y2 != (it_x->second).end()
         && x2 != (it_y->second).end() && x1 != (it_y->second).end())
      {
        points++;
      } 
    }
  } 
  std::cout << points << std::endl;
}