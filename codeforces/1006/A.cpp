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
void solve1()
{
    ll n;
    cin >> n;
    ll a[n];
    ll b[n];
    rep(i, 0, n)
    {
        cin >> a[i];
        if (a[i] % 2)
        {
            b[i] = a[i];
        }
        else
        {
            b[i] = a[i] - 1;
        }
    }
    rep(i, 0, n)
    {
        cout << b[i] << " ";
    }
}

int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve1();
    }
}