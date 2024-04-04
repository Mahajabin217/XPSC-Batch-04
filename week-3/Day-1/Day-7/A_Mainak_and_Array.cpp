#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int ans = a[n - 1] - a[0];
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 1; i <= n - 1; i++)
        {
            ans = max(ans, a[i] - a[0]);
        }
        for (int i = 0; i <= n - 2; i++)
        {
            ans = max(ans, a[n - 1] - a[i]);
        }
        for (int i = 1; i <= n - 1; i++)
        {
            ans = max(ans, a[i - 1] - a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
