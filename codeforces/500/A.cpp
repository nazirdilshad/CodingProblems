#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,t;
    cin>>n>>t;
    int a[n];
    int visited[100000]={0};
    for(int i = 0; i < n-1; i++){
        cin>>a[i];
    }

    int idx = 0,flag=0;
    while(idx<=t-1){
        if(idx== t-1){
            cout<<"YES"<<endl;
            flag =1;
            break;
        }
        idx += a[idx];
    }
    if(flag==0)
        cout<<"NO"<<endl;
    
	return 0;
}
