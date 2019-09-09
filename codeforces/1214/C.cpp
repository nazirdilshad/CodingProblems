#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,count1 =0,count2 = 0;
    cin>>n;
    vector<char> v(n);
    for(auto &i:v) {
        cin>>i;
        if(i == '(') {
            count1++;
        }
        else {
            count2++;
        }
    }
    
    
    if(count1 != count2) {
        cout<<"No"<<endl;
        return 0;
    }
    
 
    stack<char> s;
 
    for(int i = 0; i < n; i++) {
        if(s.empty() || s.top() == v[i]) {
            s.push(v[i]);
        } else if(s.top() == '(' && v[i] == ')') {
            s.pop();
        } else {
            s.push(v[i]);
        }
    }
    if(s.size() == 2 || s.size() == 0) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    
    
    
   
    
   
    return 0;
}
