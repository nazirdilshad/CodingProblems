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

ll mod = 1e9 + 7;
int main()
{
    int n, m;
    cin >> n >> m;
    map<int, set<char>> m1;
    rep(i, 0, n)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            m1[j].insert(s[j]);
        }
    }
    ll ans = 1;
    for (auto i : m1)
    {
        ans = (ans * i.second.size()) % mod;
    }
    cout << ans;
}
