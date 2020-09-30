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
int main()
{
    ll n, k, d;
    cin >> n >> k >> d;
    vector<ll> w(n + 1, 0);
    vector<ll> wod(n + 1, 0);
    for (int i = 0; i < n + 1; i++)
    {
        if (i <= k)
        {
            w[i] = 1;
            if (i < d)
            {
                wod[i] = 1;
            }
        }
    }
    w[0] = 0, wod[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i < j)
            {
                continue;
            }
            w[i] = (w[i] + w[i - j]) % mod;
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i < j)
            {
                continue;
            }
            if (j < d)
            {
                wod[i] = (wod[i] + wod[i - j]) % mod;
            }
        }
    }
    cout << (w[n] - wod[n] + mod) % mod;
}
