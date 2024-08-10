#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define lb "\n"
#define ll long long
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))

using namespace std;
using namespace __gnu_pbds;

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
    pair<ll, ll> xry;
    ll x;
    cin >> x;
    ll a = 0, b = 0;
    ll cnt = 0;
    while ((1 << cnt) <= x) // Finding msb in x
    {
        cnt++;
    }
    ll msb = 1 << (cnt - 1);
    a = msb;
    b = a ^ x;
    cout << b << ' ' << a << lb;
}