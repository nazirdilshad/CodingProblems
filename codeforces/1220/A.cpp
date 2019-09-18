#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    string s1;
    cin>>s1;
    ll x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='z')
        {
            x+=1;
        }
        else if(s1[i]=='n')
        {
            y+=1;
        }
    }
    
    for(int i=0;i<y;i++){
        cout<<"1"<<" ";
    }
    for(int i=0;i<x;i++){
        cout<<"0"<<" ";
    }
    cout<<"\n";
    
    
    return 0;
}