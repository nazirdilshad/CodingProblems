#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n,k;
    cin>>n>>k;
    ll x,y,z,p,q,r,sum;
    x = n*2;
    y= n*5;
    z = n*8;
    if(x%k==0){
        p=x/k;
    }
    else{
        p = (x/k) + 1;
    }
    if(y%k==0){
        q=y/k;
    }
    else{
        q = (y/k) + 1;
    }
    if(z%k==0){
        r= z/k;
    }
    else{
        r = (z/k) + 1;
    }
    sum = p+q+r;
	cout<<sum;
	return 0;
}