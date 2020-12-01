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

bool isprime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
struct dataa
{
    ll p, c, s;
};
bool compare(dataa a, dataa b)
{
    return a.p < b.p;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n], b[n];
    vector<dataa> C(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    rep(i, 0, n)
    {
        cin >> b[i];
    }
    rep(i, 0, n)
    {
        C[i] = {a[i] - b[i], a[i], b[i]};
    }
    sort(C.begin(), C.end(), compare);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (k > 0 || C[i].p < 0)
        {
            ans += C[i].c;
            k--;
        }
        else
        {
            ans += C[i].s;
        }
    }
    cout << ans;
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
