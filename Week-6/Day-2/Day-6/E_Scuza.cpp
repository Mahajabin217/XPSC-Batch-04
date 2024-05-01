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
        vector<ll> a(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b(n + 2, 0);
        for (ll i = 1; i <= n; i++)
        {
            b[i] = (a[i] + b[i - 1]);
        }
        vector<ll> ans(q);
        vector<pair<ll, ll>> qry(q);
        for (ll i = 0; i < q; i++)
        {
            cin >> qry[i].first;
            qry[i].second = i;
        }
        sort(qry.begin(), qry.end());
        ll cnt = 0;
        for (ll i = 0; i < q; i++)
        {
            while (cnt < n && a.at(cnt + 1) <= qry[i].first)
            {
                cnt++;
            }
            ans[qry[i].second] = b[cnt];
        }
        for (ll i = 0; i < q; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}