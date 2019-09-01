#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    map<string,int> mp;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        
        cin>>s;
        mp[s]++;
        
        if(mp[s]==1)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<s<<mp[s]-1<<endl;
        }
    }
    return 0;
    
}