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
    ll n;
    cin >> n;
    ll a[n], sum = 0;
    bool odd = 0, even = 0, both = 0;

    rep(i, 0, n)
    {
        cin >> a[i];
        if (a[i] % 2)
        {
            odd = 1;
        }
        else
        {
            even = 1;
        }
        if (odd && even)
        {
            both = 1;
        }
        sum += a[i];
    }
    if (sum % 2 || both)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
    }
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