#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d,e,f,g,h;
	cin>>a;
	cin>>b;
	cin>>c;
	d = a+b*c;
    e = a*(b+c);
    f = a*b*c;
    g = (a+b)*c;
    h = a+b+c;
    if(g>d && g>e && g>f){
        cout<<g;
    }
    else if(d>=e && d>=f && d>=g && d>=h){
        cout<<d;
    }
    else if(e>=d && e>=f && e>=g && e>=h){
        cout<<e;
    }
    else if(f>=d && f>=e && f>=g && f>=h){
        cout<<f;
    }
    else{
        cout<<h;
    }
	return 0;
}