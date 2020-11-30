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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(k); //index track krte h isme
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    int mx = -1;
    int idx;
    for (int i = 0; i < k; i++)
    {
        mx = -1;
        for (int j = 0; j < n; j++)
        {
            if (b[j] > mx)
            {
                mx = b[j];
                idx = j;
            }
        }
        b[idx] = INT_MIN;
        c[i] = idx;
    }
    sort(c.begin(), c.end());
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res += a[c[i]]; //jyada wala add krdo
    }
    cout << res << endl;
    if (k == 1)
        cout << n << endl;
    else
    {
        for (int i = 0; i < k - 1; i++)
        {
            if (i == 0)
            {
                res = c[i] + (c[i + 1] - c[i]);
            }
            else
            {
                res = c[i + 1] - c[i];
            }
            cout << res << " ";
        }
        res = n - c[k - 1];
        cout << res << endl;
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