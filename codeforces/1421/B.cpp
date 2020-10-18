#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lld;
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

void solve()
{
    ll x;
    cin >> x;
    char a[x][x];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> a[i][j];
        }
    }
    if (a[0][1] == a[1][0] && a[x - 1][x - 2] == a[x - 2][x - 1] && a[x - 2][x - 1] == a[0][1])
    {
        cout << 2 << endl;
        cout << x - 1 << " " << x << endl;
        cout << x << " " << x - 1 << endl;
        return;
    }
    if (a[0][1] == a[1][0] && a[x - 1][x - 2] == a[x - 2][x - 1] && a[x - 2][x - 1] != a[0][1])
    {
        cout << 0 << endl;
        //cout<<a[x-2][x-1]<<" "<<a[x-1][x-2];
        return;
    }
    if (a[0][1] == a[1][0] && a[x - 1][x - 2] != a[x - 2][x - 1])
    {
        cout << 1 << endl;
        if (a[x - 2][x - 1] == a[0][1])
        {
            cout << x - 1 << " " << x << endl;
        }
        else
        {
            cout << x << " " << x - 1 << endl;
        }
        //cout<<a[x-2][x-1]<<" "<<a[x-1][x-2];
        return;
    }
    if (a[0][1] != a[1][0] && a[x - 1][x - 2] == a[x - 2][x - 1] && a[x - 1][x - 2] == a[0][1])
    {
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    if (a[0][1] != a[1][0] && a[x - 1][x - 2] == a[x - 2][x - 1] && a[x - 1][x - 2] == a[1][0])
    {
        cout << 1 << endl;
        cout << 2 << " " << 1 << endl;
        return;
    }
    if (a[0][1] != a[1][0] && a[x - 1][x - 2] != a[x - 2][x - 1] && a[x - 1][x - 2] == a[1][0])
    {
        cout << 2 << endl;
        cout << 2 << " " << 1 << endl;
        cout << x - 1 << " " << x << endl;
        return;
    }
    if (a[0][1] != a[1][0] && a[x - 1][x - 2] != a[x - 2][x - 1] && a[x - 1][x - 2] == a[0][1])
    {
        cout << 2 << endl;
        cout << 1 << " " << 2 << endl;
        cout << x - 1 << " " << x << endl;
        return;
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

    return 0;
}
