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

// vector<int> graph[200050];
// int visited[200050];
// int dis[200050];
// int subtree[200050];
// vector<int> g;

// void dfs(int node, int depth)
// {
//     visited[node] = 1;
//     dis[node] = depth;
//     subtree[node] = 1;
//     for (auto i : graph[node])
//     {
//         if (!visited[i])
//         {
//             dfs(i, depth + 1);
//             subtree[node] += subtree[i];
//         }
//     }
//     g.push_back(subtree[node] - 1 - depth);
// }

// void solve()
// {
//     ll n, k;
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//     {
//         ll a, b;
//         cin >> a >> b;
//         graph[a].pb(b);
//         graph[b].pb(a);
//     }
//     dfs(1, 0);
//     ll ans = 0;
//     sort(g.begin(), g.end(), greater<int>());

//     //adding value at tourist spots
//     for (int i = 0; i < n - k; i++)
//     {
//         ans += g[i];
//     }
//     cout << ans << endl;
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

//cONCERT tICKETS CSES problem set

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

bool isvalid(int i, int j, int r, int c)
{
    return (i >= 0 && j >= 0 && i < r && j < c);
}

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll zero = 0;
    int maxx = -1;
    set<int> s1, s2;
    rep(i, 0, n)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            zero++;
        }
        if (s1.find(a[i]) == s1.end())
        {
            s1.insert(a[i]);
        }
        else
        {
            s2.insert(a[i]);
        }
    }

    if (zero == 0)
    {
        cout << 0 << endl;
        return;
    }
    int x = 0;
    if (zero == 1)
    {
        for (auto i : s1)
        {
            if (i != x)
            {
                cout << x << endl;
                return;
            }
            x++;
        }
        cout << x << endl;
        return;
    }
    int sum = 0, flag = 0;
    if (zero >= 2)
    {
        for (auto i : s1)
        {
            if (i != x && flag == 0)
            {
                //sum += x;
                break;
                flag = 1;
            }
            x++;
        }
        sum += x;
        x = 0;
        for (auto y : s2)
        {
            if (y != x)
            {
                //sum += x;
                break;
            }
            x++;
        }
        sum += x;
    }
    cout << sum << endl;
    return;
}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}