#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll k,w,n,a,b;
    cin>>k>>n>>w;
    a=(w)*(k+(w*k));
    if(a % 2 == 0)
        a = a/2;
    else
        a = a/2 + 1;
    b=a-n;
    
    if(b<0){
        b=0;
    }
    cout<<b;
	
	return 0;
}