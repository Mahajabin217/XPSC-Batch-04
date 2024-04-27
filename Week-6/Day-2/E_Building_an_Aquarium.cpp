#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 1;
        ll r = INT_MAX;
        ll ans = INT_MAX;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll res = 0;
            for (ll i : a)
            {
                if (mid > i)
                {
                    res += (mid - i);
                }
            }
            if (res <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}