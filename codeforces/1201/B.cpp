#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max 10000001
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    // ll n;
    // cin >> n;
    // string s;
    // cin >> s;
    // map<char, vector<ll>> mp;
    // for (ll i = 0; i < n; i++)
    // {
    //     mp[s[i]].push_back(i);
    // }
    // ll m;
    // cin >> m;
    // while (m > 0)
    // {
    //     string s1;
    //     cin >> s1;
    //     map<char, ll> mp2;
    //     for (ll i = 0; i < s1.size(); i++)
    //     {

    //         mp2[s1[i]]++;

    //     }

    //     m--;
    // }

    ll n;
    cin >> n;
    ll a[n + 1];
    ll sum = 0;
    forn(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    
    sort(a, a + n);
    ll sum2 = sum - a[n - 1];
    if (sum % 2 == 0 && sum2 >= a[n - 1])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}