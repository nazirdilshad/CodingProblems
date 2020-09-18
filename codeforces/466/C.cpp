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
    ll n, sum = 0;
    cin >> n;
    ll a[n];
    rep(i, 0, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 3 != 0)
    {
        cout << 0;
        return;
    }
    sum = sum / 3;
    ll s = 0, f = 0;
    if (sum == 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            s += a[i];
            if (s == 0)
            {
                f++;
            }
        }
        ll ans = f * (f - 1) / 2;
        cout << ans;
    }
    else
    {
        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            s += a[i];
            if (s == sum)
            {
                f++;
            }
            else if (s == 2 * sum)
            {
                ans += f;
            }
        }
        cout << ans;
    }
}
 
int main()
{
 
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}