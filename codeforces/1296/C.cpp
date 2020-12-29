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
//#define mp make_pair
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
    string s;
    cin >> s;
    ll a[n], x = 0, y = 0;
    map<pair<int, int>, int> mp;
    mp[{0, 0}] = 0;
    int st = INT_MAX, e = INT_MAX, len = INT_MAX;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            x--;
        }
        else if (s[i] == 'R')
        {
            x++;
        }
        else if (s[i] == 'U')
        {
            y++;
        }
        else if (s[i] == 'D')
        {
            y--;
        }
        if (mp[{x, y}] != 0 || (x == 0 && y == 0 && mp[{x, y}] == 0))
        {
            if (i - mp[{x, y}] + 1 < len)
            {
                len = i - mp[{x, y}] + 1;
                st = mp[{x, y}] + 1;
                e = i + 1;
            }
        }
        mp[{x, y}] = i + 1;
    }

    if (len == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << st << " " << e << endl;
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