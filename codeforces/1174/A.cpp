#include <bits/stdc++.h>
using namespace std;
typedef long ll;
#define max 10000001

int main()
{
    ll n;
    cin >> n;
    ll a[max];
    cin >> a[0];
    int flag = 0;
    ll d = 2 * n;
    for (ll i = 1; i < d; i++)
    {
        cin >> a[i];
        if (a[i] != a[0])
        {
            flag = 1;
        }
    }
    sort(a, a + d);
    if (flag == 1)
    {
        for (ll i = 0; i < d; i++)
            cout << a[i] << " ";
    }
    else
    {
        cout << -1;
    }

    return 0;
}