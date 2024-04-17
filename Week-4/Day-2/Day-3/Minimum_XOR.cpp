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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int min_xor = a[0];
        for (int i = 1; i < n; i++)
        {
            min_xor ^= a[i];
        }
        if (min_xor == 0)
        {
            cout << "0" << endl;
            // break;
        }
        else
        {
            int ans = min_xor;
            for (auto x : a)
            {
                ans = min(ans, min_xor ^ x);
            }
            cout << ans << endl;
        }
    }
    return 0;
}