#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll factory(ll n, ll t, vector<ll> &a)
{
    ll l = 0, r = 1e18;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll Products = 0;
        for (ll i = 0; i < n; i++)
        {
            Products += (mid / a[i]);
            if (Products >= t)
            {
                break;
            }
        }
        if (Products >= t)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll res = factory(n, t, a);
    cout << res << endl;
    return 0;
}