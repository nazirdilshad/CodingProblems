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

vector<int> adj[200];
vector<int> visited(200, -1);
stack<int> st;
bool hascycle = false;
bool dfs(int i)
{
    visited[i] = 0;
    for (auto j : adj[i])
    {
        if ((visited[j] == -1 && dfs(j)) || visited[j] == 0)
        {
            hascycle = true;
            return true;
        }
    }
    visited[i] = 1;
    st.push(i);
    return false;
}
void solve()
{
    string s[100];
    ll n, flag = 0;
    cin >> n;
    rep(i, 0, n)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int x = s[i].size();
        int y = s[i + 1].size();
        int cnt = 0;
        for (int j = 0; j < min(x, y); j++)
        {
            if (s[i][j] != s[i + 1][j])
            {
                int u = s[i][j];
                int v = s[i + 1][j];
                adj[u].push_back(v);
                cnt++;
                break;
            }
        }
        if (x > y && cnt == 0)
        {
            flag = 1; //eg. abcd before ab
        }
    }
    for (int i = 122; i >= 97; i--)
    {
        if (visited[i] == -1)
        {
            dfs(i);
        }
    }
    if (hascycle == true || flag == 1)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        for (int i = 0; i <= 25; i++)
        {
            int topp = st.top();
            printf("%c", topp);
            st.pop();
        }
        }
}

int main()
{
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}