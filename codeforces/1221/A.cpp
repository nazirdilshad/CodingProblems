#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p64;
typedef vector<ll> v420;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof(x))

void solve()
{
    ll n;
    cin >> n;
    v420 v;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    ll sum = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > 2048)
        {
            continue;
        }

        if (v[i] + sum > 2048)
        {
            continue;
        }
        sum += v[i];
        if (sum == 2048)
        {
            cout << "YES\n";
            return;
        }
        else
        {
            continue;
        }
    }
    cout << "no\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
