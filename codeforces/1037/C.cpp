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

int main()
{
    int n, i = 0, count = 0;
    string a, b;
    cin >> n;
    cin >> a >> b;
    while (i < n)
    {
        if (a[i] == b[i])
        {
            i++;
        }
        if (a[i] != b[i])
        {
            if (a[i] != a[i + 1] && a[i + 1] != b[i + 1])
            {
                swap(a[i], a[i + 1]);
                count++;
                i += 2;
            }
            else
            {
                a[i] = b[i];
                count++;
                i++;
            }
        }
    }
    cout << count;
}