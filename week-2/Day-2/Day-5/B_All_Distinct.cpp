#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        int remove = 0;
        for (auto i : mp)
        {
            remove += (i.second - 1);
        }
        int ans = n - remove;
        if (remove % 2 == 1) // remove elements jdi bijor hoy
        {
            ans--;
        }
        cout << ans << endl;
    }
    return 0;
}
