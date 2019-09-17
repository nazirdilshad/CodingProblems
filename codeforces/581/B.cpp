#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i, n, max = 0;
    cin >> n;
    int a[n + 1];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] > max)
        {
            max = a[i];
            a[i] = 0;
        }
        else
            a[i] = max - a[i] + 1;
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}