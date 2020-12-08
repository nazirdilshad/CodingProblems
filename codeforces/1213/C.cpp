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
    vector<ll> v;
    ll sum = 0;
    for (int i = 1; i < 11; i++)
    {
        ll x = m * i;
        v.push_back(x % 10);
        sum += (x % 10);
    }

    ll size = v.size();
    ll ans = n / m;
    ll fans = 0;
    ll y = ans / size;
    ll x = ans % size;
    fans = (y * sum);
    for (int i = 0; i < x; i++)
    {
        fans += v[i];
    }
    cout << fans << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
