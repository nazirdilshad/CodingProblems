#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int q;
	cin>>q;
	ll a,b,c,d,e,f;
	for(int i=0;i<q;++i){
	    cin>>a>>b>>c;
	    d = a+b+c;
	    e= d/2;
	    f= d%2;
	    cout<<e<<"\n";
	}
	
	return 0;
}