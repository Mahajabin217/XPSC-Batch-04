#include <bits/stdc++.h>

#define lb "\n"
#define ll long long
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
using namespace std;
void solve(ll n);
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Writer    :  Mahajabin  Akter Ritu
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t=1;
    // cin >> t;
    // while (t--)
    //{
    ll n;
    cin >> n;
    solve(n);
    //}
    return 0;
}
void solve(ll n)
{
    // ll n;
    // cin >> n;
    if (n == 1)
    {
        cout << 1;
        return;
    }
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return;
    }
    if (n % 2 == 0)
    {
        for (ll i = 2; i <= n; i += 2) // even
        {
            cout << i << " ";
        }
        for (ll i = 1; i < n; i += 2) // odd
        {
            cout << i << " ";
        }
    }
    else
    {
        for (ll i = n - 1; i > 0; i -= 2) // even
        {
            cout << i << " ";
        }
        for (ll i = n; i > 0; i -= 2) // odd
        {
            cout << i << " ";
        }
    }
    cout << lb;
}