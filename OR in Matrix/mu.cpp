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


void solve()
{
    ll m, n;
    cin >> m >> n;
    bool b[m][n];
    bool rows[m];
    bool columns[n];
    fill_n(rows, m, 1);
    fill_n(columns, n, 1);
    for(ll i=0; i<m; i++) {
        for(ll j=0; j<n; j++) {
          cin >> b[i][j];
          if (b[i][j] == 0) {
            rows[i] = 0;
            columns[j] = 0;
          }
        }
    }
    bool bContainsOne = false;
    ll a[m][n];
    for(ll i=0; i<m; i++) {
        for(ll j=0; j<n; j++) {
          if (b[i][j] == 1) {
            bContainsOne = true;
            if (columns[j] == 0 and rows[i] == 0) {
              cout << "NO";
              return;
            }
          }
            if(columns[j] == 1 and rows[i] == 1){
                a[i][j] = 1;
            }
            else {
                a[i][j] = 0;
            }
        }
    }
    ll countr = 0;
    ll countc = 0;
    for(ll i = 0; i<m; i++) {
        if (rows[i] == 1) countr++;
    }
    for(ll i = 0; i<n; i++) {
        if (columns[i] == 1) countc++;
    }
    if((countc == 0 or countr == 0) and bContainsOne) {
        cout << "NO";
        return;
    }
    cout << "YES" << "\n";
    for(ll i=0; i<m; i++) {
        for(ll j=0; j<n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
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
    t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}

