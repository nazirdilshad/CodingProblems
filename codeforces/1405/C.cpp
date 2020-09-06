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

// vector<int> adj[300000];
// vector<int> visited(200, -1);
// stack<int> st;
// bool isvalid(int i, int j, int r, int c)
// {
//     return (i >= 0 && j >= 0 && i < r && j < c);
// }

void solve()
{
    ll n, x, one = 0, zero = 0;
    cin >> n >> x;
    string s;
    cin >> s;

    map<ll, set<char>> m1;
    for (int i = 0; i < n; i++)
    {
        m1[i % x].insert(s[i]);
    }

    for (int i = 0; i < x; i++)
    {
        if (m1[i].count('0') and m1[i].count('1'))
        {
            cout << "NO" << endl;
            return;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (n)
    //     {
    //         break;
    //     }
    // }
    for (int i = 0; i < x; i++)
    {

        if (m1[i].count('1'))
        {
            one++;
        }

        if (m1[i].count('0'))
        {
            zero++;
        }
    }
    if (one * 2 > x or zero * 2 > x)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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