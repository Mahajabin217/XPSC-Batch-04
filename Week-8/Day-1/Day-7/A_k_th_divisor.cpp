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
    ll t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a.push_back(i);
            if ((n / i) != i)
            {
                a.push_back(n / i);
            }
        }
    }
    sort(a.begin(), a.end());
    if (a.size() < k)
    {
        cout << -1 << lb;
        return;
    }
    cout << a[k - 1] << lb;
}