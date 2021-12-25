#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define PB push_back
#define MP make_pair

#define LPI(i, a, b, d) for (int i = a; i < b; i += d)

using VI = vector<int>;
using VS = vector<string>;
using PI = pair<int, int>;

auto main() -> int {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    u ll h;
    cin >> n >> h;
    u ll max1{0};
    u ll max2{0};
    LPI(i, 0, n, 1) {
      u ll wp;
      cin >> wp;
      max1 = max(max1, wp);
      if (wp < max1) {
        max2 = max(max2, wp);
      }
    }
    if (h % (max1 + max2) == 0)
      cout << 2 * (h / (max1 + max2)) << '\n';
    else if (h % (max1 + max2) <= max1)
      cout << 2 * (h / (max1 + max2)) + 1 << '\n';
    else
      cout << 2 * (h / (max1 + max2)) + 2 << '\n';
  }

  return 0;
}
