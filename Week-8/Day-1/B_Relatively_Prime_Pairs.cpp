#include <bits/stdc++.h>

#define lb "\n"
#define ll long long
#define Y cout << "YES\n"
#define N cout << "NO\n"
using namespace std;

void solve();
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Writer    :  Mahajabin
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--)
    //{
    solve();
    //}
    return 0;
}
void solve()
{
    ll l, r;
    cin >> l >> r;
    Y;
    for (ll i = l; i < r + 1; i += 2)
    {
        cout << i << " " << i + 1 << lb;
    }
}