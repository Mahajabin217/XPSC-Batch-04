#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define lb "\n"
#define ll long long
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))

using namespace std;
using namespace __gnu_pbds;

void solve();
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
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
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }

    ll sum = 0;
    bool flag = true;
    for (auto [idx, val] : mp)
    {
        sum += val;
        if (sum > 2)
        {
            flag = false;
            break;
        }
    }
    
    if (flag)
        Y;
    else
        N;
}
