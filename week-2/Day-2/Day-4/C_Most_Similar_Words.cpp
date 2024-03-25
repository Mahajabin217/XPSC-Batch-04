#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int mn = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int ans = 0;
                for (int k = 0; k < m; k++)
                {
                    int dif = abs(a[i][k] - a[j][k]);
                    ans += dif;
                }
                mn = min(mn, ans);
            }
        }
        cout << mn << endl;
    }
    return 0;
}