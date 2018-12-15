#include <bits/stdc++.h>
using namespace std;

int main() {
	string S,t;
	cin>>S;
	cin>>t;
	reverse (S.begin(),S.end());
	if(S==t){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
	return 0;
}