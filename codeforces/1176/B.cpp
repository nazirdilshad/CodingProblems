#include <bits/stdc++.h>
using namespace std;
typedef long ll;
#define max 10000001

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, x;
        cin >> n;
        vector<ll> v;
        ll var, y;
        ll count1 = 0, count2 = 0, count3 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 3 == 1)
                count1++;
            else if (x % 3 == 2)
                count2++;
            else
                count3++;
            v.push_back(x);
        }

        if (count1 != 0 && count2 != 0)
        {
            y = min(count1, count2);
            ll x = abs(count1 - count2);
            var = (count1 > count2) ? (count1 - y) : (count2 - y);
            ll rem = var / 3;
            cout << count3 + rem + y << endl;
        }
        else
        {
            ll x = count1 / 3;
            ll y = count2 / 3;
            cout << x + y + count3<<endl;
        }
    }
    return 0;
}