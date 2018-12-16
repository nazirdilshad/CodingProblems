#include <iostream>
using namespace std;
typedef long long ll;


int main() {
	ll x , b;
	cin>>x;
	
	if(x%5 == 0){
	b = x/5;
	
	}
	else if((x%5) != 0){
	    b = (x/5) + 1;
	   
	}
	else if(x<=5){
	    b=1;
	}
	cout<<b;

	
	
	return 0;
}