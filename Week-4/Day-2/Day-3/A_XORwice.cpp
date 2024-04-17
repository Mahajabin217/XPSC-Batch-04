#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll x =0;
        ll ans = a ^ x + b ^ x;
        cout << ans << endl;
    }
    return 0;
}