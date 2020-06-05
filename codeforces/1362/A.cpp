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

void solve()
{
    ll a, b, c = 0;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
    }
    else
    {
        if (a < b)
        {
            swap(a, b);
        }
        if (a % b != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            ll x = a / b;
            while (x > 1)
            {
                if (x % 8 == 0)
                {
                    x /= 8;
                    c++;
                }
                else if (x % 4 == 0)
                {
                    x /= 4;
                    c++;
                }
                else if (x % 2 == 0)
                {
                    x /= 2;
                    c++;
                }
                else
                {
                    break;
                }
            }
            if (x == 1)
            {
                cout << c << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
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