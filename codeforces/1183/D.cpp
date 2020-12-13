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
bool check(ll mid, ll n, ll &a, ll &b, ll &k)
{
    if ((mid * a) + (n - mid) * b < k)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    unordered_map<ll, ll> mp, mp1;
    rep(i, 0, n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<ll> v;
    for (auto i : mp)
    {
        v.push_back(i.second);
    }
    sort(v.begin(), v.end());
    ll sum = 0, maxx;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (!mp1[v[i]])
        {
            maxx = v[i];
            sum += v[i];
            mp1[v[i]]++;
        }
        else
        {
            if (maxx - 1 > 0)
            {
                sum += (maxx - 1);
                mp1[maxx - 1]++;
                maxx = maxx - 1;
            }
        }
    }

    cout << sum << endl;
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
