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
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll cost = (n>0 && a[0]!=b[0]) ? 1 : 0;
    bool lastFlip = (cost == 1) ? true : false;

    // cout << cost << endl;

    for(int i=1; i<n;i++) {
        if(a[i]!=b[i]) {
            if(a[i-1] != a[i]) {
                if(lastFlip) {
                    lastFlip = false;
                }
                else {
                    cost++;
                    lastFlip = true;
                }
            }
            else {
                lastFlip = true;
                cost++;
            }
        }
        else {
            lastFlip = false;
        }
    }
    cout << cost << endl;


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
