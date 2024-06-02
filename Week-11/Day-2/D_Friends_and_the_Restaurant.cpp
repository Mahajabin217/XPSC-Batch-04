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
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].second;
    }
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        b[i] = a[i].second - a[i].first;
    }
    sort(b.begin(), b.end());
    ll i = 0;
    ll j = n - 1;
    ll cnt = 0;
    while (i < j)
    {
        if (b[i] + b[j] >= 0)
        {
            cnt++;
            i++;
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << cnt << lb;
}