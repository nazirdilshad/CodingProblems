#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n];
    for(ll i=1;i<=n;++i){
        cin>>a[i];
        
    }
    for(ll i=1;i<=n;i++){
        int flag=1;
        for(int j=i-x;j<=i+y;j++){
        if(j<1 || j>n)continue;
        if(j==i)continue;
        if(a[j]<=a[i]){
            flag = 0;
            break;
        }
        }
        if(flag){
            cout<<i;
            return 0;
        }
        
    }
    
	
	return 0;
}