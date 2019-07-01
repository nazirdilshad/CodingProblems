#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , x=0;
	cin>>n;
	int p[n+1];
	for(int i=0;i<n;i++){
	    cin>>p[i];
	    x += p[i];
	}
   double y = x/(double)n;
	cout<<setprecision(12)<<fixed<<y;
	
}