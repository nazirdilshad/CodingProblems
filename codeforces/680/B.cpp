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
    int n, a, count = 0;
    cin >> n >> a;
    int ar[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];

        if (ar[i] == 1)
            count++;
    }
    for (int i = 1; i < a; i++)
    {
        if (a + a - i > n)
            continue;
        if ((ar[i] == 1 && ar[a + a - i] == 0) || (ar[i] == 0 && ar[a + a - i] == 1))
        {
            count -= 1;
        }
    }
    cout << count;
    return 0;
}
