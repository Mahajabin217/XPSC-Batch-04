#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] || a[i] + 1 == b[j] || a[i] == b[j] + 1)
            {
                sum += 1;
                b[j] = -7;
                break;
            }
            // cout << i << " " << j << endl;
        }
    }
    cout << sum << endl;
    return 0;
}