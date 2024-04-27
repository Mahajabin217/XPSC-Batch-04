#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool solve(ll x)
{
    ll ans = cbrt(x);
    for (ll i = 1; i <= ans; i++)
    {
        for (ll j = 1; j <= ans; j++)
        {
            if (i * i * i + j * j * j == x)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (solve(x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}