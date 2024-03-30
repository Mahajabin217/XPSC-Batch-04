#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        // ll sum = 0;
        vector<ll> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            // sum+=a[i];
        }
        vector<ll> pre(n + 1, 0);
        // pre[0] = a[0];
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum = pre[n];
            sum -= (pre[r] - pre[l - 1]);
            sum += ((r - l + 1) * k);
            if (sum % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}