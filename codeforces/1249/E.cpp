#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p64;
typedef vector<ll> v420;
ll mod = 1e9 + 7;
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
    ll n, m;
    cin >> n >> m;
    ll a[n], b[n];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    rep(i, 1, n)
    {
        cin >> b[i];
    }
    ll dp[n][2], x = m;
    mem(dp, 0);
    dp[0][1] = m;
    cout << 0 << " ";
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = min(dp[i - 1][0] + a[i], dp[i - 1][1] + a[i]);
        dp[i][1] = min(dp[i - 1][0] + m + b[i], dp[i - 1][1] + b[i]);
        cout << min(dp[i][0], dp[i][1]) << " ";
    }
}

int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}
