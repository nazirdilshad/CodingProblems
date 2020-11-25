#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p64;
typedef vector<ll> v420;

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

bool compare(string s1, string s2)
{
    return s1.size() < s2.size();
}
struct data
{
    ll pos, minele, maxele, minele_pos, maxele_pos;
};
void solve()
{
    ll k;
    cin >> k;
    vector<pair<ll, pair<ll, ll>>> v;
    for (int i = 0; i < k; i++)
    {
        ll n;
        cin >> n;
        vector<ll> vec;
        for (int j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            vec.pb(x);
        }
        ll sum = accumulate(vec.begin(), vec.end(), 0);
        for (int j = 0; j < n; j++)
        {
            v.pb({sum - vec[j], {i + 1, j + 1}});
        }
    }
    stable_sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i].first == v[i + 1].first && (v[i].second.first != v[i + 1].second.first))
        {
            cout << "YES" << endl;
            cout << v[i].second.first << " " << v[i].second.second << endl;
            cout << v[i + 1].second.first << " " << v[i + 1].second.second << endl;
            return;
        }
    }
    cout << "NO" << endl;
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