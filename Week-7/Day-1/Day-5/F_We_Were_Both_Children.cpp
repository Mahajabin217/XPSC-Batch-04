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
        vector<ll> v(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > n) // je elemnt gulo n thke boro se gulo skip krbo
            {
                continue;
                // v[a[i]]++;
            }
            v[a[i]]++; // chotw hole v array te rekhe dibo
        }
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll cnt = 0;
            for (ll j = 1; j * j <= i; j++) // gunitok br loop chaliye dekhlm
            {
                if (i % j == 0)
                {
                    cnt += v[j];
                    if (j * j != i) // jdi gunitok na hoy
                    {
                        cnt += v[i / j];
                    }
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}