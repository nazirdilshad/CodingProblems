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
#define DANGER                        \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    ll n, m;
    cin >> n >> m;
    if ((n - m > 1) || (m > 2 * n + 2))
    {
        cout << -1;
        return 0;
    }
    while (m > 0 && n > 0)
    {
        if (m > n)
        {
            cout << 1;
            m--;
            if (m)
            {
                cout << 1;
                m--;
            }
            if (n)
            {
                cout << 0;
                n--;
            }
        }
        else if (n == m)
        {
            if (n)
            {
                cout << 10;
                n--;
                m--;
            }
        }
        else
        {
            cout << 0;
            n--;
        }
    }
    while (m--)
        cout << 1;
    return 0;
}