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
    int a, b, x;
    cin >> a >> b >> x;
    string res = "";
    int bari;
    if (a >= b)
    {
        bari = 0;
    }
    else
    {
        bari = 1;
    }
    while (x)
    {
        if (x == 1)
        { //yeh base case h
            if (bari)
            {
                while (b)
                {
                    res += '1';
                    b--;
                }
                while (a)
                {
                    res += '0';
                    a--;
                }
            }
            else
            {
                while (a)
                {
                    res += '0';
                    a--;
                }
                while (b)
                {
                    res += '1';
                    b--;
                }
            }
        }
        else
        {
            cout << bari;
            if (bari)
            {
                b--;
                bari ^= 1;
            }
            else
            {
                a--;
                bari ^= 1;
            }
        }
        x--;
    }
    cout << res << endl;
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