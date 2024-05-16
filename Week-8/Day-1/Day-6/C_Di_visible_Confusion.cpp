#include <bits/stdc++.h>

#define lb "\n"
#define ll long long
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
using namespace std;

void solve();
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Writer    :  Mahajabin  Akter Ritu
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
    vector<ll> a(n + 3);
    bool ans = false;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll i = 1;
    while (i <= n)
    {
        bool cnt = false;
        for (ll j = 2; j <= i + 1; j++)
        {
            if (a[i] % j != 0)
            {
                cnt = true;
                break;
            }
        }
        if (!cnt)
        {
            ans = true;
            break;
        }
        i++;
    }
    if (!ans)
        Y;
    else
        N;
}