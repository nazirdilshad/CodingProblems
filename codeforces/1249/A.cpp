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
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll cnt = 1;
    bool flag = 0;
    rep(i, 0, n - 1)
    {
        if (a[i] + 1 == a[i + 1] && flag == 0)
        {
            cnt++;
            flag = 1;
        }
    }
    cout << cnt << endl;
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
