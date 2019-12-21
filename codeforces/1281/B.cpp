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
    string s1, s2;
    cin >> s1 >> s2;
    char largest = s1[0], smallest = s1[0];
    int x, y;
    string s3 = s1;
    sort(s3.begin(), s3.end());
    bool flag = false;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1 == s3)
        {
            if (s1 < s2)
            {
                cout << s1 << endl;
            }
            else
            {
                cout << "---" << endl;
            }
            return;
        }
        if (s1[i] != s3[i])
        {
            x = i;
            break;
        }
    }

    for (int i = s1.size() - 1; i >= x; i--)
    {
        if (s1[i] == s3[x])
        {
            y = i;
            break;
        }
    }
    swap(s1[y], s1[x]);

    if (s1 < s2)
    {
        cout << s1 << endl;
    }
    else
    {
        cout << "---" << endl;
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