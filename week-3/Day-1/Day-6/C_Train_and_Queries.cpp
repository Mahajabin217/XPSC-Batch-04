#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, vector<ll>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]].push_back(i);
        }
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            if (x == y)
            {
                cout << "YES" << endl;
            }
            if (mp[x].empty() || mp[y].empty())
            {
                cout << "NO" << endl;
                continue;
            }
            if (mp[x].front() < mp[y].back())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
