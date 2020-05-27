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
    ll n, k;
    cin >> n >> k;
    ll ans = n;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            // if (i <= k)
            // {
            //     ans = max(ans, i);
            // }
            if (i <= k)
            {
                ans = min(ans, n / i);
            }
            if (n / i <= k)
            {
                ans = min(ans, i);
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}