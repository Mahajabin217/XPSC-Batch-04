#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    int x = min(a, b);
    for (int i = 1; i <= x; i++)
    {
        if (a / i + b / i >= n)
        {
            ans = i;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}