#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, x;
    cin >> n >> x;
    int a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool find = false;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != x)
        {
            if (find)
            {
                cout << " ";
            }
            cout << a[i];
            find = true;
        }
    }
    cout << endl;
    return 0;
}

