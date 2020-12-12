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
    ll power[32];
    for (int i = 0; i < 32; i++)
    {
        power[i] = pow(3, i);
    }
    ll sum = 0, i = 0;
    if (binary_search(power, power + 32, n))
    {
        cout << n << endl;
        return;
    }
    else
    {
        while (sum < n)
        {
            sum += power[i];
            i++;
        }
        while (i >= 0)
        {
            if (sum - power[i] >= n)
            {
                sum -= power[i];
            }
            i--;
        }
        cout << sum << endl;
    }
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
