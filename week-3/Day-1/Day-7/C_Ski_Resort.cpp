#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        ll val = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                val++;
                if (i == n - 1 || a[i + 1] > q)
                {
                    if (val >= k)
                    {
                        ll res = val - k + 1;
                        ll add = (res * (res + 1)) / 2;
                        ans += add;
                    }
                    val = 0;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}