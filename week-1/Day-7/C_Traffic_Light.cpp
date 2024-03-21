#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        s2 += s2;
        bool green = false;
        ll res = 0;
        ll cnt = 0;
        if (s1[0] == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] == 'g')
            {
                res = max(res, cnt);
                green = false;
            }
            if (s2[i] == s1[0] && green == false)
            {
                green = true;
                cnt = 0;
            }
            if (green)
            {
                cnt++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
