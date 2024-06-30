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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll l = 0;
    ll r = 0;
   // ll ans = abs(l - r) + 1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'B' && l == 0)
        {
            l = i + 1;
        }
        if (s[i] == 'B' && l != 0)
        {
            r = i + 1;
        }
    }
    cout << abs(l - r) + 1 << lb;
}