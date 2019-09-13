#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max 10000001
#define forn(i, n) for (ll i = 0; i < ll(n); i++)

int main()
{
    ll n, d, gc = 0, c = 0, a, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> d;
        gc = __gcd(gc, d);
    }
    for (i = 1; i <= sqrt(gc); i++)
    {
        if (gc % i == 0)
        {
            if (gc / i == i)
                c++;
            else
                c += 2;
        }
    }
    cout << c;
}
