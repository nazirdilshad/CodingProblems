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
    ll c, init;
    cin >> c >> init;
    ll lo = init, hi = init;
    ll time = 0;
    bool flag = false;
    for (int i = 0; i < c; i++)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        ll diff = x - time;
        lo -= diff;
        hi += diff;
        time = x;
        lo = max(lo, y);
        hi = min(hi, z);
        if (lo > hi)
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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