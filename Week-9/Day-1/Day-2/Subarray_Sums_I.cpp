#include <bits/stdc++.h>

#define lb "\n"
#define ll long long
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
const ll M = 2e5;
ll n, x;
ll a[M];
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
    cin >> n >> x;
    map<ll, ll> m;
    ll sum = 0;
    ll cnt = 0;
    m[0]++;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        cnt += m[sum - x];
        m[sum]++;
    }
    cout << cnt << lb;
}