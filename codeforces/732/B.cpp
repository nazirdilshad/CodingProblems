#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1], sum = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] + a[i + 1] < k)
        {
            a[i + 1] = k - a[i];
        }
        v.push_back(a[i]);
    }
    int sum2 = 0;
    sum2 = accumulate(v.begin(), v.end(), sum2);
    cout << sum2 - sum << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
}
