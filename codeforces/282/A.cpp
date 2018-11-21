#include <bits/stdc++.h>
using namespace std;

int main() {
	int x=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    string s;
	    cin>>s;
	    if(s == "++X"||s=="X++"){
	       x =x+1;
	    }
	    else{
	       x= x-1;
	    }
	}
	cout<<x;
	return 0;
}