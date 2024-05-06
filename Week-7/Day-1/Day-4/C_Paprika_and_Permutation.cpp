#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(ll n, ll *a)
{
    ll found = 0;
    bool v[n + 1] = {false};
    vector<ll> b, c;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= n)
        {
            if (v[a[i]] == false)
            {
                v[a[i]] = true;
            }
            else
            {
                b.push_back(a[i]);
            }
        }
        else
        {
            b.push_back(a[i]);
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        if (v[i] == false)
        {
            c.push_back(i);
        }
    }
    sort(b.begin(), b.end());

    for (ll i = 0; i < b.size(); i++)
    {
        if (2 * c[i] >= b[i])
        {
            found++;
            break;
        }
    }

    if (found == 0)
    {
        return b.size();
    }
    else
    {
        return -1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll res = solve(n, a);
        cout << res << endl;
    }
    return 0;
}