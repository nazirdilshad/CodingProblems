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
    ll a[n], flag = 0;
    unordered_map<ll, ll> mp1;
    unordered_map<ll, vector<ll>> mp;
    rep(i, 0, n)
    {
        cin >> a[i];
        mp1[a[i]]++;
        if (mp1[a[i]] >= m)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "0" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        ll x = a[i], cnt = 0;
        while (x)
        {
            mp[x].pb(cnt);
            cnt++;
            x /= 2;
        }
    }
    ll ans = INT_MAX;
    for (auto i : mp)
    {
        if (i.second.size() >= m)
        {
            ll sum = 0;
            sort(i.second.begin(), i.second.end());
            for (int x = 0; x < m; x++)
            {
                sum += i.second[x];
                //cout << sum << " ";
            }
            ans = min(ans, sum);
        }
    }
    cout << ans << endl;
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
