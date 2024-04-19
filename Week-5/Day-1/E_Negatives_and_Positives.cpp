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
        ll neg_val = 0;
        ll sum = 0;
        ll min_val = LLONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                neg_val++;
            }
            sum += abs(a[i]);
            min_val = min(min_val, abs(a[i]));
        }
        if (neg_val % 2 == 1)
        {
            sum -= (2 * min_val);
        }
        cout << sum << endl;
    }
    return 0;
}