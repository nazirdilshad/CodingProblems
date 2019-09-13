#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max 10000001
#define forn(i, n) for (ll i = 0; i < ll(n); i++)

int main()
{
    string a, b = "hello";
    int j = 0, count = 0;
    cin >> a;
    forn(i, a.size())
    {
        if (a[i] == b[j])
        {
            count++;
            j++;
        }
    }
    if (count == 5)
        cout << "YES";
    else
        cout << "NO";
}
