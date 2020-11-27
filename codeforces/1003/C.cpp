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
    ll a, b;
    cin >> a >> b;
    double arr[a];
    vector<ll> sum(a + 1, 0);
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        sum[i + 1] = sum[i] + arr[i];
    }
    double avg = 0.0;
    for (int i = b; i <= a; i++)
    {
        for (int j = i; j <= a; j++)
        {
            double sum2 = sum[j] - sum[j - i];
            sum2 = double(sum2 / (i));
            avg = max(avg, sum2);
        }
    }
    cout << fixed << setprecision(12) << avg;
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