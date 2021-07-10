
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 0x3f3f3f3f;
const int MAXN = (int)2e5+10;
const int mod = (int)1e9+7;

void fastscan(int &x)
{
    bool neg=false;
    register int c;
    x =0;
    c=getchar();
    if(c=='-')
    {
        neg = true;
        c=getchar();
    }
    for(;(c>47 && c<58);c=getchar())
        x = (x<<1) + (x<<3) +c -48;
    if(neg)
        x *= -1;
}

vector<ll> result;



void solve()
{
  ll n, i, j;
  cin >> n;

  for (i = 2; i * i * i <= n; i++) {
      if (n % i == 0) {
          break;
      }
  }
  n /= i;
  for (j = i+1; j*j < n; j++) {
      if (n%j == 0) {
          cout << "YES\n" << i << ' ' << j << ' ' << n/j << endl;
          return;
      }
  }
  cout << "NO" << endl;
}





int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    /*
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
    */

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
