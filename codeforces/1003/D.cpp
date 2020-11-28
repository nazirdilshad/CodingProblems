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

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> coins(n);
    map<ll, ll> mp;
    ll sum = 0;
    rep(i, 0, n)
    {
        cin >> coins[i];
        mp[coins[i]]++;
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int res = 0;
        for (int i = 31; i >= 0; i--)
        {
            ll a = pow(2, i);
            int ans = 0;

            if (mp[a])
            {
                if (mp[a] < (x / a))
                {
                    ans = mp[a];
                }
                else
                {
                    ans = x / a;
                }
                x -= ans * a;
                res += ans;
            }
            if (!x)
            {
                break;
            }
        }
        if (!x)
        {
            cout << res << endl;
        }
        else
        {
            cout << -1 << endl;
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