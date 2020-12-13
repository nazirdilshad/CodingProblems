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
    ll a, b;
    cin >> a >> b;
    ll arr[a];
    rep(i, 0, a)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    ll max_price = arr[0] + b;
    rep(i, 1, a)
    {
        if ((arr[i] + b) <= max_price || arr[i] - b <= max_price)
        {
            continue;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << max_price << endl;
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
