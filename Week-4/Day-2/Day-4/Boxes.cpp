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
        sort(a.begin(), a.end(), greater<ll>());
        ll box = 0;
        ll sum = 0;
        for (ll num : a)
        {
            if (sum >= num)
            {
                sum ^= num;
            }
            else
            {
                sum = num;
                box++;
            }
        }
        cout << box << endl;
    }
    return 0;
}