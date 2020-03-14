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

void solve()
{
    int n, k;
    cin >> n >> k;
    ll a[n], dp[n], sum = 0;
    int x = k - 1;
    rep(i, 0, n)
    {
        cin >> a[i];
        if (i < k)
        {
            sum += a[i];
            //x--;
        }
    }
    dp[0] = sum;
    ll mini = dp[0], miniindex = 1;
    rep(i, 1, n - k + 1)
    {
        dp[i] = a[i + k - 1] + dp[i - 1] - a[i - 1];
        if (dp[i] < mini)
        {
            mini = dp[i];
            miniindex = i + 1;
        }
    }
   
    cout << miniindex;
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