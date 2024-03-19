#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll even_sum = 0;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        even_sum += a[i];
    }
    //sort(a.begin(), a.end());
    if (even_sum % 2 == 0)
    {
        cout << even_sum << endl;
    }
    else
    {
        //sort(a.begin(),a.end());
        sort(a,a+n);
        for (ll i = 0; i < n; i++)
        {
            // sort(a.begin(),a.end());
            if (a[i] % 2 != 0)
            {
                even_sum -= a[i];
                //cout << even_sum - a[i] << endl;
                break;
            }
        }
        cout << even_sum << endl;
    }
    return 0;
}