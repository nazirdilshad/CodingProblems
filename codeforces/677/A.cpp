#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,h;
	cin>>n>>h;
	int a[n];
	int count=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i]>h){
	        count += 2;
	    }
	    else{
	        count++;
	    }
	    
	}
	cout<<count;
	return 0;
}