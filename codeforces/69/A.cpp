#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
	int a[n][3];
	int sum1=0,sum2=0,sum3=0;
	for(int i=0;i<n;i++){
	    
	        cin>>a[i][0];
	        sum1 += a[i][0];
	        cin>>a[i][1];
	        sum2 += a[i][1];
	        cin>>a[i][2];
	        sum3 += a[i][2];
	        
	    
	
	}
	if(sum1==0 && sum2==0 && sum3==0){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
	return 0;
}