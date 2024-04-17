#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans ;
        for (ll i = 0; i < n; i++)
        {
            if ((a[i] & k) == k) // supermask ki na check krlm
            {
                ans &= a[i]; // supermask hoile & krbo
            }
        }
        if (ans == k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}