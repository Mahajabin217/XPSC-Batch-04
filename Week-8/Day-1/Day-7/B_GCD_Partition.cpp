#include <bits/stdc++.h>

#define lb "\n"
#define ll long long
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
const ll M = 2e8 + 10;
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
    ll n, v1 = 0, v2 = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        v2 += a[i];
    }
    v1 += a[0];
    v2 -= a[0];
    ll ans = gcd(v1, v2);
    for (ll i = 1; i < n - 1; i++)
    {
        v1 += a[i];
        v2 -= a[i];
        ans = max(ans, gcd(v1, v2));
    }
    cout << ans << endl;
}