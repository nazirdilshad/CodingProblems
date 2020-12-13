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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<pair<ll, ll>> v(n);
    rep(i, 0, n)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end(), greater<pair<ll, ll>>());
    ll sum = 0;
    ll index[m * k];
    for (int i = 0; i < m * k; i++)
    {
        sum += v[i].first;
        index[i] = v[i].second;
    }
    vector<ll> ans;
    sort(index, index + (m * k));
    for (int i = 0; i < k - 1; i++)
    {
        ans.pb(index[(i + 1) * m - 1]);
    }
    cout << sum << endl;
    for (auto i : ans)
    {
        cout << i + 1 << " ";
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