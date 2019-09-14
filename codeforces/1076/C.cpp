#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double d, a, b;
        cin >> d;
        if (d > 0 && d < 4)
        {
            cout << "N" << endl;
        }
        else
        {
            int D;
            D = d * d - 4 * d;
            a = double((d + (sqrt(D)))) / 2;
            b = double((d - (sqrt(D)))) / 2;
            cout << "Y ";
            cout << setprecision(9) << fixed << a << " " << b << endl;
        }
    }
}
