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
        ll min_val = a[0];
        for (ll i = 0; i < n; i++)
        {
            // if (i == 0)
            // {
            //    min_val = a[0];
            //}
            // else

            {
                min_val = min_val & a[i];
            }
        }
        cout << min_val << endl;
    }
    return 0;
}