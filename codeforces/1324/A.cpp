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
        ll n;
        cin >> n;
        ll a[n];
        rep(i, 0, n)
        {
            cin >> a[i];
        }
        int flag = 0;
        rep(i, 0, n)
        {
            rep(j, 1, n)
            {
                if (abs(a[j] - a[i]) % 2 != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
    }