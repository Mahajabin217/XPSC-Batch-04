#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int a = 1;
        int cnt = 0;
        while (a * 2 <= x)
        {
            a = a * 2;
            cnt++;
        }
        int ans = 1;
        bool found = false;
        for (int i = cnt - 1; i >= 0; i--)
        {
            if ((x & (1 << i)))
            {
                found = true;
            }
            else
            {
                if (found)
                {
                    ans = ans * 2;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}