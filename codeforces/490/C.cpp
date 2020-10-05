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
    string s;
    ll a, b;

    cin >> s >> a >> b;
    ll n = s.size();
    ll pre[s.size()], suf[s.size()];
    pre[0] = (s[0] - '0') % a;
    suf[n - 1] = (s[n - 1] - '0') % b;
    for (int i = 1; i < s.size(); i++)
    {
        pre[i] = (pre[i - 1] * 10 + s[i] - '0') % a;
    }
    int t = 10;
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = (suf[i + 1] + (s[i] - '0') * t) % b;
        t = (t % b * 10 % b) % b;
    }

    int ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (pre[i] == 0 && suf[i + 1] == 0 && s[i + 1] != '0')
        {
            ans = i;
            break;
        }
    }
    if (ans != -1)
    {
        cout << "YES" << endl;
        cout << s.substr(0, ans + 1) << endl;
        cout << s.substr(ans + 1, n);
    }
    else
    {
        cout << "NO";
    }
}
