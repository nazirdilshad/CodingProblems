#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p64;
typedef vector<ll> v420;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof(x))
#define DANGER                        \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
        p.push_back(make_pair(x, i + 1));
    }
    sort(p.begin(), p.end());
    sort(a, a + n);
    reverse(a, a + n);
    reverse(p.begin(), p.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (a[i] * i) + 1;
    }
    cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i].second << " ";
    }
}