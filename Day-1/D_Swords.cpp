#include <bits/stdc++.h>

#define lb "\n"
#define ll long long
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
const ll M = 2e8 + 5;
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
    ll n;
    cin >> n;
    vector<ll> a(n), b;
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m = max(m, a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != m)
        {
            b.push_back(m - a[i]);
        }
    }
    m = b[0];
    n = b.size();
    for (ll i = 1; i < n; i++)
    {
        m = gcd(m, b[i]);
    }
    ll ans = 0;
    ll i;
    for (i = 0; i < n; i++)
    {
        ans += (b[i] / m);
    }
    cout << ans << " " << m;
}