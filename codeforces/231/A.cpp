#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,petya,vasya,tonya;
	int solved=0;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>petya>>tonya>>vasya;
	    if(petya+vasya+tonya>=2){
	         solved++;
	    }
	}
	 cout<<solved;
	return 0;
}