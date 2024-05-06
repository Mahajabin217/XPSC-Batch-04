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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b;
        for (ll i = 0; i < n; i++)
        {
            int l = -1, r = -1;
            if (i - 1 >= 0)
            {
                l = abs(a[i] - a[i - 1]);
            }
            if (i + 1 < n)
            {
                r = abs(a[i] - a[i + 1]);
            }
            b.push_back(max(l, r));
        }
        ll ans = INT_MAX;
        for (ll i = 0; i < b.size(); i++)
        {
            ans = min(ans, b[i]);
        }
        cout << ans << endl;
    }
    return 0;
}