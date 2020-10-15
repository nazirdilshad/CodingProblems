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
ll fun(ll x, ll limit)
{
    if (x > limit)
    {
        return 0;
    }
    ll a = fun(x * 10, limit);
    ll b = fun(x * 10 + 1, limit);
    return a + b + 1;
}
void solve()
{
    ll n;
    cin >> n;
    cout << fun(1, n);
}

int main()
{
    solve();
    return 0;
}
