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
        vector<ll> a(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<ll>());
        ll ans = 0, sum = 0;
        for (ll i = 0; i < k; i++)
        {
            sum += n - a[i];
            if (sum < n)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}