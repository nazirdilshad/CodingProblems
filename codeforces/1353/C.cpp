#include <iostream>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    long long sum = 1, i = 1, cnt = 0;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        while (sum != n * n)
        {
            cnt += (i * i) * 8;
            sum += (8 * i);
            i++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}