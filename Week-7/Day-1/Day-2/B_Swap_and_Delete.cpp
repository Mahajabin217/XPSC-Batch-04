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
        int x = 0;
        int y = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (y)
                {
                    y--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (x)
                {
                    x--;
                }
                else
                {
                    break;
                }
            }
        }
        cout << x + y << endl;
    }
    return 0;
}
