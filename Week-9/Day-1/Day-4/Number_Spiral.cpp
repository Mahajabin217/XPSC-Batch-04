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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    ll x, y;
    cin >> x >> y;
    ll d = max(x, y);
    ll ans = (d - 1) * (d - 1);
    ll cnt = 0;
    if (d % 2)
    {
        if (x == d)
        {
            cnt = ans + y;
        }
        else
        {
            cnt = ans + 2 * d - x;
        }
    }
    else
    {
        if (y == d)
        {
            cnt = ans + x;
        }
        else
        {
            cnt = ans + 2 * d - y;
        }
    }
    cout << cnt << lb;
}