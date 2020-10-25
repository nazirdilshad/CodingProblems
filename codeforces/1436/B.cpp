#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lld;
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

ll mod = 1e9 + 7;
int mat[109][109];
void solve()
{
    int n;
    cin >> n;
    memset(mat, 0, sizeof mat);
    for (int i = 0; i < n; ++i)
    {
        mat[i][i] = 1;
        mat[i][i + 1] = 1;
    }
    mat[n - 1][0] = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << mat[i][j] << ' ';
        cout << '\n';
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
