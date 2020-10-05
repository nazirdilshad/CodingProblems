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
    cin >> s;
    string ans = "", tans = "";
    //ans += s[0], ans += s[1];

    for (int i = 0; i < s.size(); i++)
    {
        int len = ans.size();
        if (i > 1 && s[i] == ans[len - 1] && ans[len - 1] == ans[len - 2])
        {
            continue;
        }
        ans += s[i];
    }
    //cout << ans << " ";
    for (int i = 0; i < 3 && i < ans.size(); i++)
    {
        tans += ans[i];
    }
    for (int i = 3; i < ans.size(); i++)
    {
        int len = tans.size();
        if (ans[i] == tans[len - 1] && tans[len - 2] == tans[len - 3])
        {
            continue;
        }
        tans += ans[i];
    }

    cout << tans;
}
