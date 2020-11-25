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
    ll n, k;
    cin >> n >> k;
    ll a[n];
    map<ll, vector<ll>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]].push_back(i + 1);
    }
    if (mp.size() < k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (auto i : mp)
        {
            if (k > 0)
            {
                cout << i.second[0] << " ";
                k--;
            }
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