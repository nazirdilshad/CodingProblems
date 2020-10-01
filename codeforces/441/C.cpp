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
    ll n, m, k;
    cin >> n >> m >> k;
    // vector<vector<int>>visited(n+1,vector<int>(m+1,0));
    int ct = n * m - 2 * (k - 1), p = 2;
    int r = 1, c = 1, l = 1;

    while (k)
    {
        if (k == 1)
        {
            p = ct;
        }

        cout << p << " ";
        for (int i = 0; i < p; i++)
        {
            cout << r << " " << c << " ";
            c += l;
            if (c == m + 1)
            {
                l = -1;
                c--;
                r++;
            }
            else if (c == 0)
            {
                l = 1;
                r++;
                c++;
            }
        }
        k--;
        cout << endl;
    }
}
