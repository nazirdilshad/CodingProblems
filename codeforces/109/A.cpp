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
    ll n;
    cin >> n;
    ll four = 0, seven = 0, flag = 0;
    for (int i = 0; 4 * i <= n; i++)
    {
        four = i;
        ll x = n - i * 4;
        if (x % 7 == 0 && x >= 0)
        {
            seven = x / 7;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        rep(i, 0, four)
        {
            cout << 4;
        }
        rep(i, 0, seven)
        {
            cout << 7;
        }
    }
    else
    {
        cout << -1;
    }
}
