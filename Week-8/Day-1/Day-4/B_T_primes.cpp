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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve()
{

    ll n;
    cin >> n;
    ll m = sqrt(n);
    if (n == 1 || m * m != n)
    {
        N;
        return;
    }
    int i;
    ll x = sqrt(m);
    for (i = 2; i <= x; i++)
    {
        if (m % i == 0)
        {
            N;
            return;
        }
    }
    Y;
}
