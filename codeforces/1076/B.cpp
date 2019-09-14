#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int smallestdivisor(ll x)
{
    if (x % 2 == 0)
    {
        cout << x / 2;
        return 0;
    }
    for (int i = 3; i <= sqrt(x); i += 2)
    {
        if (x % i == 0)
        {
            cout << 1 + (x - i) / 2;
            return 0;
        }
    }
    cout << 1;
    return 0;
}

int main()
{
    ll t;
    cin >> t;
    smallestdivisor(t);
}
