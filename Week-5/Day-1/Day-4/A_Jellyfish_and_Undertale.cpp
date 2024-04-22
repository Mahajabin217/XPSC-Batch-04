#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll sum = 0;
        if (b >= a)
            sum = a;
        else
            sum = b;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] + 1 <= a)
            {
                sum += arr[i];
            }
            else
            {
                sum += a - 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}