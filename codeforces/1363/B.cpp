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
    string s;
    cin >> s;
    ll zero = 0, one = 0;
    for (auto c : s)
    {
        if (c == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    ll ans = min(zero, one);
    ll s0 = 0, s1 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            zero--;
            s0++;
        }
        else
        {
            one--;
            s1++;
        }
        ans = min(ans, s0 + one);
        ans = min(ans, s1 + zero);
    }
    cout << ans << endl;
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