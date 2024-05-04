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
        vector<ll> a;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ll sum = cnt + (!a.empty() && a.back() > x);
            if (sum == 0 || (sum == 1 && x <= a[0]))
            {
                a.push_back(x);
                cnt = sum;
                cout << '1';
            }
            else
            {
                cout << '0';
            }
        }
        cout << endl;
    }
    return 0;
}
