#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    if (n % 2 != 0)
        cout << 0;
    else
    {
        ll ans = pow(2, n / 2);
        cout << ans;
    }
}