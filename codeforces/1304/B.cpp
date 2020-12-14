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

bool isPalindrome(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    unordered_map<string, int> mp;
    vector<string> ans;
    vector<string> a(n);

    rep(i, 0, n)
    {
        string s;
        cin >> s;
        a[i] = s;

        string x = s;
        reverse(s.begin(), s.end());
        if (mp[s])
        {
            ans.pb(s);
            ans.pb(x);
            mp[s]--;
        }
        else
        {
            mp[x]++;
        }
    }
    string mid = "";
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]])
        {
            if (isPalindrome(a[i]))
            {
                mid = a[i];
            }
        }
    }
    //cout << mid;
    cout << (ans.size() * m + mid.size()) << endl;
    string arr[ans.size() + 1];
    int i = 0, j = ans.size(), x = 0;
    while (i < j)
    {
        arr[i] = ans[x];
        arr[j] = ans[x + 1];
        i++;
        j--;
        x += 2;
    }
    arr[(i + j) / 2] = mid;
    string anss = "";
    for (int i = 0; i < ans.size() + 1; i++)
    {
        anss += arr[i];
    }
    cout << anss;
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