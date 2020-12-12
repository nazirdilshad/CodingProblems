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
    vector<pair<ll, ll>> v;
    rep(i, 0, n)
    {
        cin >> a[i];
        v.pb({a[i], i + 1});
    }
    sort(v.begin(), v.end());
    vector<bool> visited(n + 1, 0);
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++)
    {

        if (visited[i])
        {
            continue;
        }
        int j = i;
        vector<ll> temp;
        int cycle_size = 0;
        while (visited[j] == 0)
        {
            visited[j] = 1;
            temp.pb(j);
            j = v[j - 1].second;
            cycle_size++;
        }
        //cout << cycle_size << " ";
        for (auto x : temp)
        {
            ans[x] = cycle_size;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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
