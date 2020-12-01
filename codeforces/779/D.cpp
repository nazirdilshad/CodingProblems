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
vector<int> a;
bool check(int m, string s, string t)
{
    for (int i = 0; i < m; i++)
    {
        s[a[i]] = '.';
    }
    int i = 0, j = 0;
    while (i < s.size())
    {
        if (s[i] == t[j])
        {
            j++;
        }
        i++;
    }
    if (j == t.size())
    {
        return true;
    }
    return false;
}
void solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.size();
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    int l = 0, r = n;
    while (r > l + 1)
    {
        int m = (l + r) / 2;
        if (check(m, s, t))
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    cout << l << endl;
}

int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}
