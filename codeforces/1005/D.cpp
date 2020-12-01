// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef pair<ll, ll> p64;
// typedef vector<ll> v420;

// #define pb push_back
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define maxi 100000
// #define pii pair<int, int>
// #define eb emplace_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(x) x.begin(), x.end()
// #define mem(x, y) memset(x, y, sizeof(x))
// #define DANGER                        \
//     std::ios::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)

// void solve()
// {
//     ll n, sum = 0;
//     cin >> n;
//     ll a[n], b[n], c[n];
//     rep(i, 0, n)
//     {
//         cin >> a[i];
//         sum += a[i];
//         if (i == 0)
//         {
//             b[i] = a[i];
//             continue;
//         }
//         b[i] = a[i] + b[i - 1];
//     }

//     c[0] = a[n - 1];
//     for (int i = n - 2, k = 1; i >= 0; i--, k++)
//     {
//         c[k] = c[k - 1] + a[i];
//     }
//     ll ans = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int t = lower_bound(c, c + n, b[i]) - c;
//         if (c[t] == b[i] )
//         {
//             ans = max(ans, c[t]);
//         }
//     }
//     cout << ans;
// }

// int main()
// {
//     int t = 1;
//     //cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

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

bool isPowerOfTwo(ll x)
{
    return x && (!(x & (x - 1)));
}
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int sum = 0;
    int curr;
    int cnt = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        curr = s[i] - '0';
        sum += curr;
        cnt++;
        if (sum % 3 == 0)
        {
            res++;
            cnt = 0;
            sum = 0;
        }
        else if (curr % 3 == 0)
        {
            res++;
            cnt = 0;
            sum = 0;
        }
        else if (cnt == 3)
        {
            res++;
            cnt = 0;
            sum = 0;
        }
    }
    cout << res << endl;
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
