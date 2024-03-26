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
        // Main kaj 
        int mx_mp = 0;
        for (auto i : mp)
        {
            mx_mp = max(mx_mp, i.second); // max br krlm 
        }
        int ans = 0;
        while (mx_mp < n) 
        {
            int r = n - mx_mp; // je elemnt gulo bki ache 
            int p = mx_mp; // je elemnt add krlm 
            ans++; // clone korar por ans brbe 
            ans += min(p, r);
            mx_mp += min(p, r);
        }
        cout << ans << endl;
    }
    return 0;
}

