#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p64;
typedef vector<ll> v420;

#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define maxi 100000
#define pii pair<int, int>
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof(x))
#define DANGER                        \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    ll n, smallestdivisor;
    cin >> n;
    ll temp = n;
    int cnt = 0;
    map<ll, ll> mp;
    vector<ll> ans;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n == 1)
        {
            break;
        }
        if (n % i == 0)
        {
            ans.push_back(i);
            n = n / i;
            mp[i]++;
            cnt++;
        }
    }
    if (n > 1)
    {
        ans.push_back(n);
        cnt++;
        mp[n]++;
    }
    if (cnt < 3 || mp.size() < 3)
    {
        cout << "NO"
             << "\n";
        return;
    }

    ll an = temp / (ans[0] * ans[1]);

    cout << "YES\n";
    cout << ans[0] << " " << ans[1] << " " << an << "\n";

    // if(n%2==0){
    //     smallestdivisor = 2;
    // }
    // else{
    //     ll sqrtofn = floor(sqrt(n));
    //     for(int i=3; i<sqrtofn; i++){
    //         if(n%i==0){
    //             smallestdivisor = i;
    //         }
    //         else if(i==sqrtofn){
    //             smallestdivisor = 1;
    //         }
    //     }
    // }
    // if(smallestdivisor == 1){
    //     cout<<"NO"<<endl;
    //     return;
    // }
    // vector<ll> v;
    // while(n>1){
    //     n = n/smallestdivisor;
    //     v.pb(n);
    // }
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