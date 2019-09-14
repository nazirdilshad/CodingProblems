#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, x;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (ll i = 0; i < n; i += 2)
    {
        cout << a[i] << " ";
    }

    n & 1 ? x = n - 2 : x = n - 1;
    for (ll i = x; i >= 1; i -= 2)
    {
        cout << a[i] << " ";
    }
}
