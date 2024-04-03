#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());
        ll res = 0;
        for (int i = 0; i < min(n, m); i++)
        {
            res += min(1ll * b[i] * h, 1ll * a[i]);
        }
        cout << res << endl;
    }
    return 0;
}