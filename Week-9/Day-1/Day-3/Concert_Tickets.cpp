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
    ll n, m;
    cin >> n >> m;
    multiset<ll> tkt;
    for (ll i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        tkt.insert(p);
    }
    vector<ll> c(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> c[i];
    }
    for (ll i = 0; i < m; i++)
    {
        auto ans = tkt.upper_bound(c[i]);
        if (ans == tkt.begin())
        {
            cout << -1 << lb;
        }
        else
        {
            ans--;
            cout << *ans << lb;
            tkt.erase(ans);
        }
    }
}