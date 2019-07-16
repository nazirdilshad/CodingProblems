#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin>>x;
	y=x%4;
	if(y==1){
	    cout<<0<<" "<<"A";
	}

	 if(y==3 ){
	    cout<<2<<" "<<"A";
	}
    if(y==0 ){
	    cout<<1<<" "<<"A";
	}

	 if(y==2){
	     cout<<1<<" "<<"B";
	 }
	 
	 
	
	return 0;
}