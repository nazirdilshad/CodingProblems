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

ll mod = 1e9 + 7;
int main()
{
    ll n, cursor;
    cin >> n >> cursor;
    string s;
    cin >> s;
    n--;
    cursor--;
    cursor = min(cursor, n - cursor);
    ll vertical = 0, horizontal = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        if (s[i] != s[n - i])
        {
            vertical += min(abs(s[i] - s[n - i]), 26 - abs(s[i] - s[n - i]));
        }
    }
    int rightmost = cursor, leftmost = cursor;
    for (int i = cursor; i <= n / 2; i++)
    {
        if (s[i] != s[n - i])
        {
            rightmost = i;
        }
    }
    for (int i = cursor; i >= 0; i--)
    {
        if (s[i] != s[n - i])
        {
            leftmost = i;
        }
    }
    horizontal = min((cursor - leftmost) + (rightmost - leftmost), (rightmost - cursor) + (rightmost - leftmost));

    cout << vertical + horizontal;
}
