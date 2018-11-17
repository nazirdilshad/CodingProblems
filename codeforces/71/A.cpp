#include <iostream>

using namespace std;

int main()
{
    int n, len;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
    len=s.length();
    if(len<=10)
    {


        cout<<s<<endl;
    }
    else{
    cout<<s[0]<<len-2<<s[len-1]<<endl;
    }


    }
    return 0;
}
