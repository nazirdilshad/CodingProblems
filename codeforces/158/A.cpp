#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int count=0;
    int a[101];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if (a[k-1]<=a[i]&&a[i]>0)
        count++;
    }
     cout<<count;
    
    
    
	return 0;
}