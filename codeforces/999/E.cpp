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

vector<int> graph[100000];
int x;
void dfs(int s, vector<int> &visited)
{
    visited[s] = 1;
    for (auto e : graph[s])
    {
        if (visited[e] == -1)
        {
            dfs(e, visited);
        }
    }
}
void dfs1(int s, vector<int> &visited, vector<int> &visited1)
{
    visited1[s] = 1;
    x++;
    for (auto e : graph[s])
    {
        if (visited[e] == -1 && visited1[e] == -1)
        {
            dfs1(e, visited, visited1);
        }
    }
}
void solve()
{
    ll n, m, s;
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].pb(b);
    }

    vector<int> visited(n + 1, -1);

    vector<pair<int, int>> cnt;
    x = 0;
    dfs(s, visited);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == -1)
        {
            x = 0;
            vector<int> visited1(n + 1, -1);
            dfs1(i, visited, visited1);
            cnt.pb({x, i});
        }
    }
    sort(cnt.begin(), cnt.end());
    reverse(cnt.begin(), cnt.end());
    for (int i = 0; i < cnt.size(); i++)
    {
        if (visited[cnt[i].second] == -1)
        {
            dfs(cnt[i].second, visited);
            ans += 1;
        }
    }

    cout << ans;
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