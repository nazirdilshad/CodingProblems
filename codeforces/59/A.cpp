#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin>>S;
	int count=0;
	int count1=0;
	for (int i=0;i<S.length();i++){
	    
	    if(isupper(S[i])){
	        count++;
	    }
	    else{
	        count1++;
	    }
	}
	
	if(count>count1){
	    transform(S.begin() ,S.end() , S.begin(), ::toupper);
	}
	else{
	    transform(S.begin() ,S.end() ,S.begin(), ::tolower);
	}
	
	cout<<S;
	return 0;
}