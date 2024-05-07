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
        string s;
        cin >> s;
        // int ans = 1e9;
        int ans = INT_MAX;
        for (int i = 'a'; i <= 'z'; i++)
        {
            int remove = 0;
            int l = 0;
            int r = n - 1;
            while (l <= r)
            {
                if (s[l] != s[r])
                {
                    if (s[l] == i)
                    {
                        l++;
                        remove++;
                    }
                    else if (s[r] == i)
                    {
                        r--;
                        remove++;
                    }
                    else
                    {
                        // remove = 1e9;
                        remove = INT_MAX;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans = min(ans, remove);
        }
        if (ans == INT_MAX)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
