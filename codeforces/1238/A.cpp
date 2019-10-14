#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p64;
typedef vector<ll> v420;

#define pb push_back
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
    int t;
    cin >> t;
    ll x, y;
    for (int i = 0; i < t; i++)
    {

        cin >> x >> y;
        ll z = x - y;
        if (z == 1)
            cout << "no\n";
        else
            cout << "yes\n";
    }

    return 0;
}