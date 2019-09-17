#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1,s2;
	cin>>s1>>s2;
	int x = s1.size(); int y = s2.size();
	
	if(x==y && s1==s2){
		cout<<-1;
		return 0;
	}
	else if(x==y && s1!=s2){
		cout<<x;
	}
	else{
	int z =max(x,y);
	cout<<z;	
	}
	return 0;
}