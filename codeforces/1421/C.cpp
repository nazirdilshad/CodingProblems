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

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    cout << 3 << endl;
    cout << "R"
         << " " << n - 1 << endl;
    cout << "L"
         << " " << n << endl;
    cout << "L"
         << " " << 2 << endl;
}

int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
