
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
    if(c=='-'){
        neg = true;
        c=getchar();
    }
    for(;(c>47 && c<58);c=getchar())
        x = (x<<1) + (x<<3) +c -48;
    if(neg)
        x =-1;
}


void solve()
{
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;int cost=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=b[i] && a[i+1]!=b[i+1] && a[i]!=a[i+1])
        {
            swap(a[i],a[i+1]);
            cost++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i]) cost++;
    }

    cout<<cost<<endl;
}



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
