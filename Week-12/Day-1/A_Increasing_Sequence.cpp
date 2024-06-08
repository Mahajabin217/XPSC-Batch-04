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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b;
    ll cnt = 1;
    for (ll i = 0; i < n; i++)
    {
        if (cnt == a[i])
        {
            cnt++;
        }
        b.push_back(cnt);
        cnt++;
    }
    cout << cnt - 1 << lb;
}
