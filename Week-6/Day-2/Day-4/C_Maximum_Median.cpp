#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll l = 1;
    ll r = 2e10;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + abs(l - r) / 2;
        ll flag = 0;
        for (ll i = n / 2; i < n; i++)
        {
            if (mid > a[i])
            {
                flag += abs(a[i] - mid);
            }
            else if (flag >= k)
            {
                break;
            }
        }
        if (flag <= k)
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}
int main()
{
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
