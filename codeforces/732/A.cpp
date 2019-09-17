#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 10; i++)
    {
        int d = k;
        if ((d * i) % 10 == r || (d * i) % 10 == 0)
        {
            cout << i;
            break;
        }
    }
}
