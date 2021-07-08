#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, k, x;
  cin >> n >> k >> x;
  ll v[n];
  for (auto &i : v)
    cin >> i;

  sort(v, v + n);
  vector<ll> gap;
  ll count = 1;
  for (ll i = 0; i < n - 1; i++) {
    ll temp = v[i + 1] - v[i];
    if (temp > x) {
      gap.push_back(temp);
      count++;
    }
  }

  sort(gap.begin(), gap.end());
  for (auto w : gap) {
    ll need = (w + x - 1) / x - 1;
    if (need <= k) {
      k -= need;
      count--;
    }
  }
  cout << count << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  /*
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
    */
  ll t = 1;
  while (t--) {
    solve();
  }

  return 0;
}
