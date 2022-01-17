#pragma GCC optimize("Ofast,unroll-loops")

#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define PB push_back

#define LPI(i, a, b, d) for (int i = a; i < (int)b; i += d)
#define CZYT(n, arr)                                                           \
  for (int i = 0; i < n; ++i)                                                  \
  cin >> arr[i]

using VI = vector<int>;
using PI = pair<int, int>;

auto solve() -> void {
  int n;
  cin >> n;
  int monsters[n], health[n], mana[n];

  CZYT(n, monsters);
  CZYT(n, health);
  {
    auto a1 = 1, n = health[0], an = health[0];
    auto sn = ((a1 + an) / 2.) * n;
    mana[0] = sn;
  }
  LPI(i, 1, n, 1) {
    int j = i;
    while (j > 0 && monsters[i] - monsters[j - 1] + 1 <= health[i])
      --j;

    int a1, nc, sn = 0, an;
    if (j == i) {
      a1 = 1, nc = health[i], an = health[i];
    } else {
      a1 = health[j], nc = monsters[i] - monsters[j] + 1, an = a1 + (nc - 1);
      LPI(xd, j, i, 1) { sn -= health[xd]; }
    }

    sn += ((a1 + an) / 2.) * nc;
    mana[i] = sn;
  }

  int ans = 0;
  LPI(i, 0, n, 1) { ans += mana[i]; }
  cout << ans << '\n';
}

auto main() -> int {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int _ = 1;
  cin >> _;
  while (_--)
    solve();

  return 0;
}
