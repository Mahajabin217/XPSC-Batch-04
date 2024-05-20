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
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        ll l = i + 1;
        ll r = n - 1;
        ll target = x - a[i].first;
        while (l < r)
        {
            ll sum = a[l].first + a[r].first;
            if (sum == target)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << lb;
                return;
            }
            else if (sum < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    cout << "IMPOSSIBLE" << lb;
}