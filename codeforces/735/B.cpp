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

bool isPowerOfTwo(ll x)
{
    return x && (!(x & (x - 1)));
}
void solve()
{
    ll n, n1, n2;
    cin >> n >> n1 >> n2;

    float a[n];
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    // if (n == 1)
    // {
    //     cout << max()
    // }
    sort(a, a + n);
    ll x = (n1 > n2) ? n1 : n2;
    ll y = (n1 + n2) - x;
    long long sum1 = 0, sum2 = 0;
    for (int i = n - 1; i >= n - y; i--)
    {
        sum1 += a[i];
    }
    for (int i = n - y - 1; i >= n - y - x; i--)
    {
        sum2 += a[i];
    }
    //cout << x << " " << y;
    float ans = (sum1 / (float)y) + (sum2 / (float)x);
    cout << fixed << setprecision(12) << ans;
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
