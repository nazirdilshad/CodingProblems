#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max 10000001
#define forn(i, n) for (ll i = 0; i < ll(n); i++)

int main()
{
    

    

    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0, count = 0, sum2 = 0;
    vector<ll> v;
    forn(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    // sort(a + 1, a + n);
    if (a[0] > sum / 2)
    {
        cout << 1 << endl
             << 1;
        return 0;
    }
    else if (a[0] <= sum / 2)
    {
        for (int i = 1; i < n; i++)
        {
            if (a[i] <= a[0] / 2)
            {
                count++;
                sum2 += a[i];
                v.push_back(i + 1);
            }
        }
        if (a[0] + sum2 > sum / 2)
        {
            cout << count + 1 << endl
                 << 1 << " ";
            for (auto x : v)
            {
                cout << x << " ";
            }

            return 0;
        }
        else
        {
            cout << 0;
            return 0;
        }
    }

    return 0;
}
