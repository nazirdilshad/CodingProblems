#include <iostream>
using namespace std;

int main() {
    long long n,m,a;
    cin>>n>>m>>a;
    long long e,f,d;
    if (m==n&&n==a)
    {
         cout<<1;
    }
    else{
        if(m%a==0)
        {
            e=m/a;
        
        }
        else
        {
            e=(m/a)+1;
        }
        if(n%a==0)
        {
            d=n/a;
        }
        else
        {
            d=(n/a)+1;
        }
     cout<<e*d;
}
	return 0;
}