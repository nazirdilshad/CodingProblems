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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    bool flag = false;
    sort(s.begin(), s.end());
    for (int i = 1; i < m; i++)
    {
        if (s[i] != s[i - 1])
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << s[m - 1] << endl;
    }
    else
    {
        map<char, int> mp;
        for (int i = m; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        string ans = "";
        ans += s[0];
        if (mp.size() == 1)
        {
            for (auto c : mp)
            {
                int x = ceil((double)(n - m) / (double)m);
                while (x--)
                {
                    ans += c.first;
                }
            }
        }
        else
        {
            ans += s.substr(m);
        }

        cout << ans << endl;
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