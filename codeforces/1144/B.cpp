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
    ll n, total = 0;
    cin >> n;
    ll a[n];
    vector<ll> odd, even;
    rep(i, 0, n)
    {
        cin >> a[i];
        total += a[i];
        if (a[i] % 2)
        {
            odd.pb(a[i]);
        }
        else
        {
            even.pb(a[i]);
        }
    }
    sort(a, a + n);
    if (odd.size() == 0 || even.size() == 0)
    {
        cout << total - a[n - 1];
        return;
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    ll sum = 0, i = odd.size() - 1, j = even.size() - 1;
    while (i >= 0 && j >= 0)
    {
        sum += odd[i];
        sum += even[j];
        i--;
        j--;
    }
    if (i < 0 && j >= 0)
    {
        sum += even[j];
    }
    else if (i >= 0 && j < 0)
    {
        sum += odd[i];
    }

    cout << total - sum;
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
