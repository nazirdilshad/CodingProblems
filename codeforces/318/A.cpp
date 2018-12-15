#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ll n,k,mid,b ;
	cin>>n>>k;
	mid = (1+n)/2;
	if(k<=mid){
	    b = 1+(k-1)*2;
	}
	else{
	    b = 2+(k-mid-1)*2;
	}
	cout<<b;
	
	return 0;
}