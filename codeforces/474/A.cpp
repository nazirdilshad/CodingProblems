#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max 10000001
#define forn(i, n) for (ll i = 0; i < ll(n); i++)

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

    char x;
    cin >> x;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    ll y = s.size();
    string s2;
    cin >> s2;
    ll z = s2.size();
    if (x == 'L')
    {
        forn(i, z)
        {
            forn(j, y)
            {

                if (s2[i] == s[j])
                {
                    cout << s[j + 1];
                    break;
                }
            }
        }
    }

    else
    {
        forn(i, z)
        {
            forn(j, y)
            {

                if (s2[i] == s[j])
                {
                    cout << s[j - 1];
                    break;
                }
            }
        }
    }

    return 0;
}