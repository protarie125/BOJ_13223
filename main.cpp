#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<double>;
using vii = vector<pii>;
using vll = vector<pll>;
using vs = vector<string>;

using vvb = vector<vb>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvd = vector<vd>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  string now, target;
  cin >> now >> target;

  ll nh, nm, ns, th, tm, ts;
  istringstream iss;

  iss = istringstream{now.substr(0, 2)};
  iss >> nh;
  iss = istringstream{now.substr(3, 2)};
  iss >> nm;
  iss = istringstream{now.substr(6)};
  iss >> ns;

  iss = istringstream{target.substr(0, 2)};
  iss >> th;
  iss = istringstream{target.substr(3, 2)};
  iss >> tm;
  iss = istringstream{target.substr(6)};
  iss >> ts;

  const auto& tic = nh * 60 * 60 + nm * 60 + ns;
  auto toc = th * 60 * 60 + tm * 60 + ts;
  if (toc <= tic) {
    toc += 24 * 60 * 60;
  }

  const auto& el = toc - tic;
  cout << setw(2) << setfill('0') << el / (60 * 60);
  cout << ':';
  cout << setw(2) << setfill('0') << (el / 60) % 60;
  cout << ':';
  cout << setw(2) << setfill('0') << el % 60;

  return 0;
}