#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 0x3f3f3f3f;
const int MAXN = (int)2e5 + 10;
const int mod = (int)1e9 + 7;

void fastscan(int &x) {
  bool neg = false;
  register int c;
  x = 0;
  c = getchar();
  if (c == '-') {
    neg = true;
    c = getchar();
  }
  for (; (c > 47 && c < 58); c = getchar())
    x = (x << 1) + (x << 3) + c - 48;
  if (neg)
    x = -1;
}

void solve() {
  int n;
  cin >> n;
  int p[n], pos[n + 1];
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    pos[p[i] - 1] = i;
  }
  int maxm = pos[0], minm = pos[0];
  for (int i = 0; i < n; i++) {
    if (pos[i] > maxm)
      maxm = pos[i];
    if (pos[i] < minm)
      minm = pos[i];
    {
      if (maxm - minm == i)
        cout << 1;
      else
        cout << 0;
    }
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
