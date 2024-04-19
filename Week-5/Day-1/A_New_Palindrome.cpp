#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void palindrome()
{
    string s;
    cin >> s;
    for (ll i = 0; i < (s.size() / 2) - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        palindrome();
    }
    return 0;
}