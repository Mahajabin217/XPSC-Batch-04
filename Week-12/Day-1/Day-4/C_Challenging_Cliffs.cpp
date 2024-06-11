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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (n == 2)
    {
        cout << a[0] << " " << a[1] << lb;
        return;
    }
    ll ans = LLONG_MAX;
    ll cnt = -1;
    for (int i = 1; i < n; i++)
    {
        if (ans > abs(a[i] - a[i - 1]))
        {
            cnt = i;
            ans = abs(a[i] - a[i - 1]);
        }
    }
    for (int i = cnt; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < cnt; i++)
    {
        cout << a[i] << " ";
    }
    cout << lb;
}
