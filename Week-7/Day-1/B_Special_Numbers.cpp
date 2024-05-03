#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll i = 0;
        ll j = 1;
        while (k > 0)
        {
            if ((k % 2) == 1)
            {
                i = (i + j) % mod;
            }
            j = (j * n) % mod;
            k /= 2;
        }
        cout << i << endl;
    }
    return 0;
}