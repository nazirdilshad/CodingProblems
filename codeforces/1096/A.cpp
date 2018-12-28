#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	ll T;
	cin>>T;
	ll b[1000];
	ll a[1001][2];
	for(ll i=0;i<T;i++){
	    for(ll j=0;j<2;j++){
	        cin>>a[i][j];}
	}
	    for(ll i=0;i<T;i++)  {  
	        b[i] = (2*(a[i][0]));}
	    
	    
	
	for (ll i = 0; i < T; i++)
    {
        for (ll j = 0; j < 1; j++)
           
            cout << a[i][0]<<" "<<b[i];
            cout<<endl;
    }
	return 0;
}