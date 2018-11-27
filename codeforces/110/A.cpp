#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	string s;
	cin>>s;
	ll count=0;
	for(ll i=0; i<s.size();i++){
	    if(s[i]=='4'||s[i]=='7'){
	        count++;
	    }
	    
	}
	if(count==7||count==4)
	cout<<"YES";
	else
	cout<<"NO";
	
	return 0;
}