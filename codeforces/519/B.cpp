#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,x;
    cin>>n;
    ll a=0, b=0 ,c = 0;
    for(ll i=0;i<n;i++){
        cin>>x;
        a += x;
    }
    for(ll i=0;i<n-1;i++){
        cin>>x;
        b +=x;
        
    }
    for(ll i=0;i<n-2;i++){
        cin>>x;
        c +=x;
        
    }
    cout<<a-b<<"\n";
    cout<<b-c<<"\n";
    
    return 0;
    
}