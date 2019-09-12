#include<bits/stdc++.h>
using namespace std;

int main () 
{ 
    int b,g,n,d;
    cin>>b>>g>>n;
    d = n+1;
    if(b<n && g< n){
        cout<<d-(n-g)-(n-b);
    }
   else if(b<n && g>=n ){
       cout<<d-(n-b);
   }
   else if(g<n && b>=n){
       cout<<d-(n-g);
   }
   else{
       cout<<d;
   }
  
    return 0; 
    
}