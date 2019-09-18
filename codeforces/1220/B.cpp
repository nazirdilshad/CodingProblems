#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll m;
            cin >> m;
            v[i].push_back(m);
        }
    }

    vector<ll> d(n);
    ll e = v[0][1] * v[1][2];
    e = e / (v[0][2]);
    d[1] = sqrt(e);
    d[0] = v[0][1] / d[1];
    for (int i = 2; i < n; i++)
    {
        d[i] = v[i][0] / d[0];
    }

    for (int i = 0; i < n; i++)
    {
        cout << d[i] << " ";
    }

    return 0;
}
