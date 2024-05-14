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
    //ll t;
    //cin >> t;
    //while (t--)
    //{
        solve();
    //}
    return 0;
}
bool tax(ll n)
{
    ll m = sqrt(n);
    ll i=0;
    for (ll i = 2; i <= m; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    ll n;
    cin >> n;
    if (n % 2)
    {
        if (tax(n))
            cout << 1;
        else
        {
            if (tax(n - 2))
                cout << 2;
            else
                cout << 3;
        }
    }
    else
    {
        if (n == 2)
            cout << 1;
        else
            cout << 2;
    }
}