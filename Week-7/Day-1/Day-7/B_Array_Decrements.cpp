#include <bits/stdc++.h>
#define ll long long
#define YES printf("YES\n")
#define NO printf("NO\n")
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        bool found = true;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            cnt = max(cnt, a[i] - b[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] - cnt < b[i] && b[i] != 0)
            {
                found = false;
            }
        }
        if (found)
            // cout << "YES" << endl;
            YES;
        else
            // cout << "NO" << endl;
            NO;
    }
    return 0;
}
