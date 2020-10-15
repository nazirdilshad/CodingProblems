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
void solve()
{
    int n;
    cin >> n;
    ll a[n], b[105] = {0}, cnt = 0, ans = 0; //b is visited array
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (cnt < n)
    {
        ans++;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= v.size() && b[i] == 0)
            {
                b[i] = 1;
                v.pb(a[i]);
                cnt++;
            }
        }
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
