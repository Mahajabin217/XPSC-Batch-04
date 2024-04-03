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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        ll task = 0;
        bool val = false;
        for (int i = 0; i <= n; i++)
        {
            if (i < n)
            {
                sum += abs(a[i]);
            }
            if (val)
            {
                if (i == n || a[i] > 0) // neg val na pele
                {
                    task++;
                    val = false;
                }
            }
            else
            {
                if (a[i] < 0) // neg val pele
                {
                    val = true;
                }
            }
        }
        cout << sum << " " << task << endl;
    }
    return 0;
}
