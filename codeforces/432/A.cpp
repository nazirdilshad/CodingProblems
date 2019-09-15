#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (k <= 5 - a[i])
        {
            count++;
        }
    }
    int x = count / 3;
    cout << x;
}
