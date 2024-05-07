#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(vector<ll> a, ll n)
{
    ll one = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            one++; // 1 pele smne jbo
        }
        else
        {
            ans += one; // 0 pele agr 1 gulo ans a add krbo
        }
    }
    return ans;
}
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
        ll res = solve(a, n);
        ll cnt = -1;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0) // surute 0 pele seta 1 kore dibo
            {
                a[i] = 1;
                cnt = i;
                break;
            }
        }
        res = max(res, solve(a, n));
        if (cnt != -1)
        {
            a[cnt] = 0;
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1) // ses r dik a 1 pele 0 kore dibo
            {
                a[i] = 0;
                cnt = i;
                break;
            }
        }
        res = max(res, solve(a, n));
        cout << res << endl;
    }
    return 0;
}