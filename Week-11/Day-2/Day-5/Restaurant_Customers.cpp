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
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        v.push_back({l, 1});
        v.push_back({r, -1});
    }
    sort(v.begin(), v.end());
    ll mx = 0;
    ll customer = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        customer += v[i].second;
        mx = max(mx, customer);
    }
    cout << mx << lb;
}