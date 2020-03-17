#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p64;
typedef vector<ll> v420;
ll inf = 1e19;
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

int main()
{
    ll n;
    cin >> n;
    ll ans1 = 1000000000000, ans2 = 1000000000000;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ll xx = n / i;
            ll yy = i;
            //cout << xx + yy << " " << ans1 + ans2 << "\n";
            ll lcm = xx * yy;
            lcm = lcm / __gcd(xx, yy);
            if (xx + yy < ans1 + ans2 && lcm == n)
            {
                ans1 = xx;
                ans2 = yy;
            }
        }
    }

    cout << ans1 << " " << ans2 << "\n";
}