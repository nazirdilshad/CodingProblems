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
    ll n, k;
    cin >> n >> k;
    ll a[n];
    set<ll> s;
    bool flag = false;
    rep(i, 0, n)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    if (s.size() > k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << n * k << endl;
        for (int i = 0; i < n; i++)
        {
            for (auto x : s)
            {
                cout << x << " ";
            }
            for (int j = 0; j < k - s.size(); j++)
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
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