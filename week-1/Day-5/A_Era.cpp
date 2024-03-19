#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] - i > cnt) // array r elemnt & index r diff, cnt thke boro hoile 
            {
                cnt = a[i] - (i+1); //cnt ke update krte hbe 
            }
        }
        cout << cnt << endl;
    }
    return 0;
}