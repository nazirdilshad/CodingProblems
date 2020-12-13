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
    ll x, y, z;
    ll a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    ll total = a + b + c;
    ll andrew = a + b - x;
    //cout << total << " " << andrew;
    if (x <= a && y <= andrew && z <= (total - x - y))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
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