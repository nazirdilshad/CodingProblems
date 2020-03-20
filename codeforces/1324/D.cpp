

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
        int n;
        cin >> n;
        ll a[n], b[n];
        ll c[n];
        rep(i, 0, n)
        {
            cin >> a[i];
        }
        rep(i, 0, n)
        {
            cin >> b[i];
        }
        rep(i, 0, n)
        {
            c[i] = a[i] - b[i];
        }
        sort(c, c + n);
        ll l = 0, r = n - 1, result = 0;
        while (l < r)
        {
     
            if (c[l] + c[r] > 0)
            {
                result += (r - l);
                r--;
            }
     
            else
                l++;
        }
        cout << result << endl;
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