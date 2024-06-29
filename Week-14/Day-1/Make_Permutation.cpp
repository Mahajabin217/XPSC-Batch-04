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
    set<ll> s;
    for (ll i = 1; i <= n; i++)
    {
        s.insert(i);
    }
    for (ll i = 0; i < n; i++)
    {
        bool ans = false;
        for (ll j = 0; j < n; j++)
        {
            ll x = a[i] + j;
            if (s.find(x) != s.end())
            {
                s.erase(x);
                ans = true;
                break;
            }
        }
        if (!ans)
        {
            N;
            return;
        }
    }
    Y;
}