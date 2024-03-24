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
        string r1, r2;
        cin >> r1 >> r2;
        bool found = true;
        for (int i = 0; i < n; i++)
        {
            if (r1[i] != 'R' && r2[i] != 'R')
            {
                continue;
            }
            if (r1[i] != r2[i])
            {
                found = false;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}