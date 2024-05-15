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
    //ll t = 1;
    // cin >> t;
   // while (t--)
    //{
        solve();
   // }
    return 0;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    double d1 = b * log(a);
    double d2 = a * log(b);
    if (d1 > d2)
        cout << '>';
    else if (d1 < d2)
        cout << '<';
    else 
        cout << '=';
}