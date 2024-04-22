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
        ll pos_val = 0;
        ll neg_val = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            if (x >= 0)
            {
                pos_val += x;
            }
            else
            {
                if (pos_val + x >= 0)
                {
                    pos_val += x;
                }
                else
                {
                    x += pos_val;
                    pos_val = 0;
                    neg_val += x;
                }
            }
        }
        cout << -neg_val << endl;
    }
    return 0;
}
