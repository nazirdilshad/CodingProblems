#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    ll s,a,b,c,total;
    for(int i=0;i<t;i++){
        cin>>s>>a>>b>>c;
        if((s/c)<a){ 
            cout<<(s/c)<<endl;
        }else{
            ll z= s/c;
        total = (z/a)*b + (s/c);
        cout<<total<<endl;
            
        }
    }

	return 0;
}