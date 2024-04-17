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
        ll ans = 1;
        while (ans * 2 <= n)
        {
            ans = ans * 2;
        }
        cout << ans - 1 << endl;
    }
    return 0;
}