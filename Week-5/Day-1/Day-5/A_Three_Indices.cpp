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
        ll a[n + 1];
        bool found = false;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 2; i <= n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                cout << "YES" << endl;
                cout << i - 1 << " " << i << " " << i + 1 << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "NO" << endl;
    }
    return 0;
}