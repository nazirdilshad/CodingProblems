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
        string s;
        cin >> s;
        int temp = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'L')
            {
                int count = 0;
                while (i < s.length() && s[i] == 'L')
                {
     
                    count++;
                    i++;
                }
                temp = max(count, temp);
            }
        }
        cout << temp + 1 << endl;
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