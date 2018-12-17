#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p,q;
	std::set<int> c ;
	cin>>n;
	cin>>p;
	int a[101];
	int b[101];
	int count=0;
	for(int i=0;i<p;i++){
	    cin>>a[i];
	    c.insert(a[i]);
	}
	cin>>q;
	for(int i=0;i<q;i++){
	    cin>>b[i];
	    c.insert(b[i]);
	}
	if(c.size()==n){
	    cout<<"I become the guy.";
	}
	else{
	    cout<<"Oh, my keyboard!";
	}
	  
	
	return 0;
}