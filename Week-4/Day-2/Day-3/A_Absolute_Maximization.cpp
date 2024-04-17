#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll x = a[0];
        ll y = a[0];
        for (int i = 0; i < n; i++)
        {
            x = x | a[i]; // max value
            y = y & a[i]; // min value
        }
        cout << x - y << endl; // max-min
    }
    return 0;
}