#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,m,y;
    cin>>n>>m;
    ll a[n+1];
    vector <ll> v(n+1);
    map<int , int> mp;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll count = 0;
    for(int i = n; i >=0 ; i--) {
        if(mp[a[i]]) {
            v[i] = count;
            continue;
        } else {
            count++;
            mp[a[i]]++;
            v[i] = count;
        }
    }
    
    for(ll i=1;i<=m;i++){
        cin>>y;
        cout<<v[y]<<endl;
    }
    return 0;
}