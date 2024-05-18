#include <bits/stdc++.h>

#define lb "\n"
#define ll long long
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
const ll M = 2e5 + 5;
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
    ll n, x, i, j;
    cin >> n;
    vector<ll> a(M);
    vector<bool> b(M, true);
    // ll x;
    while (n--)
    {
        cin >> x;
        a[x]++;
    }
    ll ans = 1;
    for (ll i = 2; i < M; i++)
    {
        if (b[i])
        {
            ll c = 0;
            for (ll j = i; j < M; j += i)
            {
                b[j] = false;
                c += a[j];
            }
            ans = max(ans, c);
        }
    }
    cout << ans << endl;
}