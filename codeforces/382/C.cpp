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
void solve()
{
    ll n, flag = 0;
    cin >> n;
    ll a[n];
    vector<ll> arr;
    set<ll> elem;
    map<ll, ll> m;
    cin >> a[0];
    rep(i, 1, n)
    {
        cin >> a[i];
        if (a[i] != a[0])
        {
            flag = 1;
        }
    }
    if (n == 1)
    {
        cout << -1;
        return;
    }
    if (flag == 0)
    {
        cout << 1 << endl;
        cout << a[0];
        return;
    }
    sort(a, a + n);
    if (n == 2)
    {
        int dif = a[1] - a[0];
        if (dif % 2 == 0)
        {
            cout << 3 << endl;
            cout << a[0] - dif << " " << a[0] + dif / 2 << " " << a[1] + dif;
        }
        else
        {
            cout << 2 << endl;
            cout << a[0] - dif << " " << a[1] + dif;
        }
        return;
    }
    ll diff2 = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        m[a[i] - a[i - 1]]++;
    }
    if (m.size() > 2)
    {
        cout << 0 << "\n";
    }
    else if (m.size() == 1)
    {
        int x = m.begin()->first;
        if (x == 0)
        {
            cout << 1 << "\n";
            cout << a[0] << "\n";
        }
        else
        {
            cout << 2 << "\n";
            cout << a[0] - x << " " << a[n - 1] + x << "\n";
        }
    }
    else
    {
        int x = m.begin()->first;
        int y = (++m.begin())->first;
        if (m[x] == n - 2 || m[y] == n - 2)
        {
            int diff = x;
            if (m[y] == 1)
            {
                diff = y;
            }
            if (diff == x && diff / 2 != y || diff == y && diff / 2 != x)
            {
                cout << 0 << "\n";
                return;
            }
            if (diff % 2 == 0 && diff != 0)
            {
                cout << 1 << "\n";
                for (int i = 1; i < n; i++)
                {
                    if (a[i] - a[i - 1] == diff)
                    {
                        cout << a[i - 1] + diff / 2 << "\n";
                    }
                }
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else
        {
            cout << 0 << "\n";
        }
    }
}

int main()
{
    solve();
    return 0;
}
