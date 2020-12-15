#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p64;
typedef vector<ll> v420;
ll mod = 1e9 + 7;
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
    string s;
    cin >> s;

    string e = s.substr(0, 4);
    string f = s.substr(n - 4);
    string a = "", b = "", c = "", d = "";
    a = s.substr(0, 1) + s.substr(n - 3, 3);
    b = s.substr(0, 2) + s.substr(n - 2, 2);
    c = s.substr(0, 3) + s.substr(n - 1);

    if (a == "2020" || b == "2020" || c == "2020" || e == "2020" || f == "2020")
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
}