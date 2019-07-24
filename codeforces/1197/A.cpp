#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	ll n;
	
	for(int i=0;i<t;++i){
	    cin>>n;
	    ll flag=0;
	    ll a[n+1];
	    for(ll j=0;j<n;++j){
	        cin>>a[j];
	    }
	    sort(a,a+n);
	    ll k=n-2;
	    ll z;
	    for(k=n-2;k>=1;k--){
	    if(a[n-1]>= k+1 && a[n-2]>= k+1){
	       z=k;
	      flag=1;
	      break;
	    }
	    else{
	        flag=0;
	    }
	    }
	    if(flag==1){
	        cout<<z<<"\n";
	    }
	    else{
	        cout<<0<<"\n";
	    }
	}
	return 0;
}