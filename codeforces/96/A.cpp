#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int count=1;
	int l = s.size();
	for(int i=0;i<s.size();i++){
	    if(s[i]==s[i+1]){
	        count++;
	        if(count>=7)
	            break;
	    }
	   else{
	       count=1;
	    }
	    
	}
	if(count>=7)
	    cout<<"YES";
    else
    cout<<"NO";
	return 0;
}