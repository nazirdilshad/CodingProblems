#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count1= 0;
	int count2= 0;
	if(n%2 != 0){
	    cout<<1<<endl;
	    cout<<s;
	}
	else {
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            count1++;
	        }
	        else{
	            count2++;
	        }
	    }
	    
	    if(count1 != count2){
	        cout<<1<<endl;
	        cout<<s;
	        
	    }else{
	        cout<<2<<"\n";
	        cout<<s[0]<<" ";
	        for(int i=1;i<n;i++){
	            cout<<s[i];
	        }
	}
	}
	return 0;
}