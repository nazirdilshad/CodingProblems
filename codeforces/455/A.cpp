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

long mod = 1e9 + 7;
ll solve(int n, vector<ll> A)
{
    unordered_map<ll, ll> cnt;
    for (ll i = 0; i < A.size(); i++)
    {
        cnt[A[i]]++;
    }
    ll dp[101001] = {0};
    dp[0] = 0;
    dp[1] = cnt[1];
    for (ll i = 2; i <= 101000; i++)
    {
        dp[i] = (max(dp[i - 1], dp[i - 2] + (i * cnt[i])));
    }
    return dp[101000];
}

int main()
{
    int n, x;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.pb(x);
    }
    cout << solve(n, v);
}