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
    vector<ll> v1, v2;
    rep(i, 0, n)
    {
        ll x;
        cin >> x;
        v1.pb(x);
    }
    int i = 0, j = v1.size() - 1;
    while (i < j)
    {
        cout << v1[i] << " " << v1[j] << " ";
        i++;
        j--;
    }
    if (i == j)
    {
        cout << v1[j] << " ";
    }
    cout << endl;
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