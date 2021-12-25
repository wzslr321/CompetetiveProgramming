#pragma GCC optimize("Ofast,unroll-loops")

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

  int n, L, a;
  cin >> n >> L >> a;
  int curr = 0;
  int ans = 0;
  int t, l;
  LPI(i, 0, n, 1) {
    cin >> t >> l;
    ans += (t - curr) / a;
    curr = t + l;
  }
  ans += (L - curr) / a;

  cout << ans << '\n';

  return 0;
}
