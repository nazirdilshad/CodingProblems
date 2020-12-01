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

ll Pow(ll n, ll p, ll m)
{
    if (!p)
        return 1;
    else if (p & 1)
        return (n * Pow(n, p - 1, m)) % m;
    else
    {
        ll v = Pow(n, p / 2, m);
        return (v * v) % m;
    }
}
bool isprime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i * i <= n; ++i)
        if (n % i == 0)
            return false;
    for (int it = 0; it < 1e5; ++it)
    {
        ll i = rand() % (n - 1) + 1;
        if (__gcd(i, n) != 1)
            return false;
        if (Pow(i, n - 1, n) != 1)
            return false;
    }
    return true;
}
void solve()
{
    ll n, ans = 1;

    cin >> n;
    if (isprime(n))
    {
        cout << 1;
        return;
    }
    else
    {
        ll x = n - 2;
        if (!isprime(x) && n % 2)
        {
            cout << 3;
        }
        else
        {
            cout << 2;
        }
    }
    //cout << ans;
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
