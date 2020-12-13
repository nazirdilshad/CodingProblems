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
bool sum(string s)
{
    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += (s[i] - '0');
    }
    if (sum % 4 == 0)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll n, s1;
    cin >> n;
    s1 = n;

    //cin>>s;
    while (n)
    {
        string s = to_string(n);
        if (sum(s))
        {
            cout << n;
            return;
        }
        else
        {
            n++;
        }
    }
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
