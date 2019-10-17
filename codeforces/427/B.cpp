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

int i, total, k, n, m, a, x;
main()
{
    cin >> n >> m >> x;
    for (i = 0; i < n; i++)
    {
        cin >> a;

        if (a <= m)
            k++;
        else
            k = 0;

        if (k >= x)
        {
            total++;
        }
    }
    cout << total;
}