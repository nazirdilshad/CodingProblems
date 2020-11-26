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

bool compare(string s1, string s2)
{
    return s1.size() < s2.size();
}
struct data
{
    ll pos, minele, maxele, minele_pos, maxele_pos;
};
void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    rep(i, 0, n)
    {
        mp[s[i]]++;
    }

    // for (auto i : mp)
    // {
    //     while (k > 0 && i.second > 0)
    //     {
    //         i.second--;
    //         k--;
    //     }
    // }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {

        while (i->second > 0 && k > 0)
        {
            i->second--;
            k--;
        }
    }
    string ans = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[s[i]] > 0)
        {
            ans += s[i];
            mp[s[i]]--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
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