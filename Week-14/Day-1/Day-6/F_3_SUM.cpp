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

    int n;
    cin >> n;
    vector<ll> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i] % 10]++;
    }
    bool ans = false;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                bool flag1 = false, flag2 = false, flag3 = false;
                if (mp[i] != 0)
                {
                    flag1 = true;
                    mp[i]--;
                }
                if (mp[j] != 0)
                {
                    flag2 = true;
                    mp[j]--;
                }
                if (mp[k] != 0)
                {
                    flag3 = true;
                    mp[k]--;
                }
                if (flag1 && flag2 && flag3)
                {
                    int sum = i + j + k;
                    if (sum % 10 == 3)
                    {
                        ans = true;
                        break;
                    }
                }
                if (flag1)
                    mp[i]++;
                if (flag2)
                    mp[j]++;
                if (flag3)
                    mp[k]++;
            }
        }
    }
    if (ans)
        Y;
    else
        N;
}