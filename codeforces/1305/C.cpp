#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n,m;
	ll x=1;
	cin>>n>>m;
	ll a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	if(n>m){
	    cout<<0;
	}
	else{
	    for(ll i=0;i<n-1;i++){
	        for(ll j=i+1; j<n; j++){
	           int z = (abs(a[i]-a[j])%m);
	           x = (x*z)%m;
	        }
	    }
	    ll y = x;
	    cout<<y;
	}
	
	
}