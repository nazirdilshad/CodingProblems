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
    ll a[n];
    bool flag = true;
    map<ll, ll> mp, mp1, mp2;

    rep(i, 0, n)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (!mp1[a[i]])
        {
            mp1[a[i]]++;
        }
        else
        {
            mp2[a[i]]++;
        }
        if (mp[a[i]] > 2)
        {
            flag = false;
        }
    }
    if (flag == false)
    {
        cout << "No" << endl;
        return;
    }
    vector<ll> v, v1;
    for (auto i : mp1)
    {
        v.push_back(i.first);
    }
    for (auto i : mp2)
    {
        if (i.second == 1)
        {
            v1.push_back(i.first);
        }
        else
        {
            cout << "NO";
            return;
        }
    }
    reverse(v1.begin(), v1.end());
    cout << "YES" << endl;
    cout << v.size() << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << v1.size() << endl;
    for (auto i : v1)
    {
        cout << i << " ";
    }
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
