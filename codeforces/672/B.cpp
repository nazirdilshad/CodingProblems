#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> s1;
    if (n > 26)
    {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        s1.insert(s[i]);
    }
    cout << n - s1.size();
}
