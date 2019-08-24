#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    ll k = 0;
    cin>>n;
    ll a[n+1];
    cin>>a[0];
    int flag1,flag2 = 0;
    int max = a[0];
    for(int i=1;  i< n; i++){
        cin>>a[i];
        if(a[i]>max){
            max = a[i];
            k = i;
        }
        }
    for(int i=1;i<k;i++){
        if(a[i-1]>a[i]){
            cout<<"NO";
            return 0;
        }
    }
    for(int i=n-1; i>k ;i--){
        if(a[i] > a[i-1]){
            //cout<<i;
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES\n";
        
    
    
    return 0;
}