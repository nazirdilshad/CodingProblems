#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p64;
typedef vector<ll> v420;

#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define maxi 100000
#define pii pair<int, int>
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof(x))
#define DANGER                        \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    b[0] = a[0];
    ll x = a[0];
    rep(i, 1, n)
    {
        b[i] = a[i] + x;
        x = max(x, b[i]);
    }

    rep(i, 0, n)
    {
        cout << b[i] << " ";
    }
}
int main()
{
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}