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
    ll n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    ll v = lcm(a, b);
    v = n / v;
    ll d1 = n / a;
    d1 -= v;
    ll d2 = n / b;
    d2 -= v;
    ll val_1 = d1 * x + d2 * y;
    ll val_2 = max(v * x, v * y);
    // cout << d1 * x + d2 * y + max(v * x, v * y);
    cout << val_1 + val_2;
}
