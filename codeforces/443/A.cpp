#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    char c;
    set<char> s;
    while (c != '}')
    {
        cin >> c;
        if (c >= 'a' && c <= 'z')
            s.insert(c);
    }
    cout << s.size();
}
