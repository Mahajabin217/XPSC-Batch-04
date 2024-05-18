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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    set<ll> s;
    ll i = 0, j = 0;
    while (i < n && j < n)
    {
        while (j < n && !s.count(a[j]))
        {
            s.insert(a[j]);
            ans = max(ans, j - i + 1);
            j++;
        }
        while (j < n && s.count(a[j]))
        {
            s.erase(a[i]);
            i++;
        }
    }
    cout << ans << lb;
    return;
}