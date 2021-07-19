

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;

typedef tree<ll,null_type,less<ll>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

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
    ll r;
    cin >> n >> r;
    ll treshold = r;
    indexed_set s;
    ll placeholder;
    for(ll k=0; k<n; k++) {
        cin >> placeholder;
        s.insert(placeholder);
    }
    ll count = 0, i = 0, j = s.size()-1;
    while(i<=j) {
        count++;
        j--;
        i = s.order_of_key(treshold+1);
        treshold += r;
    }
    cout << count << '\n';
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
