#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,c;
    ll count=0;
    ll d=0;
    cin>>n;
    ll a[n+1];
    vector <ll> v;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            count++;
        }
        if(a[i]<0){
            d++;
             c = -1-a[i];
            v.push_back(c);

        }
        if(a[i]>0){
             c = a[i]-1;
            v.push_back(c);
        }
        
    }
    ll sum=0;
    // for(ll i=0;i<v.size();i++) 
    // {
    //     sum += v[i];
    //     cout<<v[i]<<endl;
    // }
    // cout<<sum<<endl;

    if(count==0 && d%2 != 0){
            for(ll i=0;i<v.size();i++) 
    {
        sum += v[i];
        //cout<<v[i]<<endl;
    }
    cout<<sum+2<<endl;
    }
        
    if(count>0){
        for(ll i=0;i<v.size();i++) 
    {
        sum += v[i];
        //cout<<v[i]<<endl;
    }
    cout<<sum+count<<endl;
    }
    if(count==0 && d%2==0 ){
        //cout<<accumulate(v.begin(),v.end(),0)<<endl<<"3";
        for(ll i=0;i<v.size();i++) 
    {
        sum += v[i];
        //cout<<v[i]<<endl;
    }
    cout<<sum<<endl;
    }
    
    
    return 0;
}