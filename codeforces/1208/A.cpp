#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t,a,b,n,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>n;
        c = n%3;
        d = a^b;
        if(c==0) cout<<a<<endl;
        if(c==1) cout<<b<<endl;
        if(c==2) cout<<d<<endl;
    }
    
    
    return 0;
}