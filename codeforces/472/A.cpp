#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ll n,x,y;
	cin>>n;
	if(n%2 == 0){
	    x=4;
	    y=n-4;
	}
	else{
	    x=9;
	    y=n-9;
	}
	cout<<x ;
	cout<<" "<<y;
	
	return 0;
}