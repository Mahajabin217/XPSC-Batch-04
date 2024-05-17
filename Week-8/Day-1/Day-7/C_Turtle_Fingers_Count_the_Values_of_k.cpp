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
    ll a, b, l;
    cin >> a >> b >> l;
    ll cnt = 1;
    set<ll> s;
    ll i = 0;
    while (i <= 30)
    {
        ll p = 1;
        ll j = 0;
        while (j <= 30)
        {
            if (l % (cnt * p) == 0)
            {
                s.insert(l / (cnt * p));
            }
            p *= b;
            if (p > l)
            {
                break;
            }
            j++;
        }
        cnt *= a;
        if (cnt > l)
        {
            break;
        }
        i++;
    }
    cout << s.size() << lb;
}
