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
    ll x, y;
    cin >> x >> y;
    if ((x % 2 == 0 && y % 2) || x > y)
    {
        cout << "No" << lb;
        return;
    }
    cout << "Yes" << lb;
    ll ans_1 = y - (x - 1);
    ll ans_2 = y - (x - 2);
    if (x % 2)
    {
        for (ll i = 1; i < x; i++)
            cout << 1 << " ";
        cout << ans_1 << lb;
    }
    else
    {
        for (ll i = 1; i <= x - 2; i++)
            cout << 1 << " ";
        cout << ans_2 / 2 << " " << ans_2 / 2 << lb;
    }
}