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

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll cnt = 0;
    vector<ll> v;
    rep(i, 0, n)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            cnt++;
        }
        if (i != 0 && a[i] == 1)
        {
            v.push_back(a[i - 1]);
        }
    }
    cout << cnt << endl;

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << a[n - 1];
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