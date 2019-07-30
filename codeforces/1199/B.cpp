#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll h,l,y,g;
    double x;
    cin>>h>>l;
    y=((l*l) - (h*h));
    g= 2*h;
    x = y/(double)g;
    cout<<setprecision(6)<<fixed<<x;
    
    
   
    
	
	return 0;
}