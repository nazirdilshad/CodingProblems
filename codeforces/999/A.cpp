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
    ll a[n];
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    ll cnt = 0;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (a[l] <= k)
        {
            l++;
            cnt++;
        }
        else if (a[r] <= k)
        {
            cnt++;
            r--;
        }
        else
        {
            break;
        }
    }
    cout << cnt;
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