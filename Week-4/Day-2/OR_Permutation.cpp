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
        for (ll i = n; i >= 1; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}