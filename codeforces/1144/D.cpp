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
    ll a[n];
    unordered_map<ll, ll> mp;
    rep(i, 0, n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll maxx = -1, idx;
    rep(i, 0, n)
    {
        if (mp[a[i]] > maxx)
        {
            maxx = mp[a[i]];
            idx = i;
        }
    }
    cout << n - maxx << endl;
    if (n - maxx > 0)
    {
        for (int i = idx - 1; i >= 0; i--)
        {
            if (a[i] < a[i + 1])
            {
                cout << 1 << " " << i + 1 << " " << i + 2 << endl;
            }
            else if (a[i] > a[i + 1])
            {
                cout << 2 << " " << i + 1 << " " << i + 2 << endl;
            }
            a[i] = a[i + 1];
        }
        for (int i = idx + 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                cout << 1 << " " << i + 1 << " " << i << endl;
            }
            else if (a[i] > a[i - 1])
            {
                cout << 2 << " " << i + 1 << " " << i << endl;
            }
            a[i] = a[i - 1];
        }
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
