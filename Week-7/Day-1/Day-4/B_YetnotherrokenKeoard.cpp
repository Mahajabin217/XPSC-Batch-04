#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> b, c;
        vector<bool> ans(n, true);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b') // chotw b paile
            {
                if (!c.empty())
                {
                    ans[c.back()] = false;
                    c.pop_back();
                }
                ans[i] = false;
            }
            else if (s[i] == 'B') // boro B paile
            {
                if (!b.empty())
                {
                    ans[b.back()] = false;
                    b.pop_back();
                }
                ans[i] = false;
            }
            else if (s[i] >= 'A' and s[i] <= 'Z') // chotw & boro ja thkbe  se gulo niye kaj krbo
            {
                b.push_back(i); // boro hole b te
            }
            else
            {
                c.push_back(i); // chotw hole c te
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (ans[i])
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
