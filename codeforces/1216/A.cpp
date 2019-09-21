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
    ll n;
    cin >> n;
    string a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < a.size(); i += 2)
    {
        if (a[i] == a[i + 1])
        {
            a[i] = 'a';
            a[i + 1] = 'b';
            count++;
        }
    }
    cout << count << endl;
    cout << a;
}