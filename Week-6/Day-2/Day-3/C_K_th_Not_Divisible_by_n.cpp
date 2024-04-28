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
        ll ans = k / (n - 1);
        if ((ans + k) % n == 0)
        {
            cout << ans + k - 1 << endl;
        }
        else
        {
            cout << ans + k << endl;
        }
    }
    return 0;
}