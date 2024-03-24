#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++; // map a kon elemnt koy br ase
        }
        int cnt = 0;
        for (auto it : m)
        {
            if (it.second % 2 != 0)
            {
                cnt++; // odd hoile ++ hbe
            }
        }
        if (cnt < 0)
        {
            cnt = 0;
        }
        else
        {
            cnt = cnt - 1;
        }
        if (k >= cnt && k <= n) // odd value ke delete krlm
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
