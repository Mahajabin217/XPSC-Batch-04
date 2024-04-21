#include <bits/stdc++.h>
using namespace std;
int lcs(string X, string Y, int m, int n)
{
    int L[m + 1][n + 1];
    int ans = 0;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
            {
                L[i][j] = L[i - 1][j - 1] + 1;
                ans = max(ans, L[i][j]);
            }
            else
                L[i][j] = 0;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string X, Y;
        cin >> X >> Y;
        int m = X.length();
        int n = Y.length();
        int ls = lcs(X, Y, m, n);
        int res = (m - ls) + (n - ls);
        cout << res << "\n";
    }
    return 0;
}
