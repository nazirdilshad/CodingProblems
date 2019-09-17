#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a, b, c = 0, n, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        c = c - a + b;
        if (c > max)
        {
            max = c;
        }
    }
    cout << max;
}
