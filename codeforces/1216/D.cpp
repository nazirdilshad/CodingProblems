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
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll max = arr[n - 1];
    ll sum = 0;
    ll a[n + 1];
    for (int i = 0; i < n; i++)
    {
        a[i] = max - arr[i];
        sum += max - arr[i];
    }
    ll gc = a[0];
    for (int i = 1; i < n; i++)
    {

        gc = __gcd(gc, a[i]);
    }
    cout << sum / gc << " " << gc;
}