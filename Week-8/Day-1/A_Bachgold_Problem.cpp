#include <bits/stdc++.h>

#define lb "\n"
#define ll long long
#define Y cout << "YES\n"
#define N cout << "NO\n"
using namespace std;

void solve();
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Writer    :  Mahajabin
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--)
    //{
    //int n;
    //cin >> n;
    solve();
    //}
    return 0;
}
void solve()
{
    int n;
    cin >> n;
    int ans;
    if (n % 2 == 0)
    {
        ans = n / 2;
        cout << ans << lb;
        for (int i = 0; i < ans; i++)
        {
            cout << 2 << " ";
        }
        cout << lb;
    }
    else if (n == 3)
    {
        cout << 1 << lb;
        cout << 3 << lb;
    }
    else
    {
        n = n - 3;
        ans = n / 2;
        cout << ans + 1 << lb;
        for (int i = 0; i < ans; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << lb;
    }
}