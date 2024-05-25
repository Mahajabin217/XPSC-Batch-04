#include <bits/stdc++.h>

#define lb "\n"
#define ll long long
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
using namespace std;

void solve();
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Writer    :  Mahajabin  Akter Ritu
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    string s1, s2;
    cin >> s1;
    ll l = s1.length();
    s2 = s1;
    reverse(s2.begin(), s2.end());
    if (s1 == s2)
    {
        cout << 0 << lb;
    }
    else
    {
        cout << 3 << lb;
        cout << "R " << l - 1 << lb;
        cout << "L " << l << lb;
        cout << "L " << 2 << lb;
    }
}