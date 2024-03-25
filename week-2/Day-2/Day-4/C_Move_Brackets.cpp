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
        int right = 0, left = 0, cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                left++;
            }
            else
            {
                left--;
            }
            if (left < 0)
            {
                cnt++;
                left++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}