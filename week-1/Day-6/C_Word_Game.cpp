#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<string, int> m;
        int n;
        cin >> n;
        string sn[3][n];
        for (int p = 0; p < 3; p++) // 3 person r jnw
        {
            for (int w = 0; w < n; w++) // word r jnw
            {
                cin >> sn[p][w];
                m[sn[p][w]]++;
            }
        }
        int total = 0;
        for (int p = 0; p < 3; p++)
        {
            for (int w = 0; w < n; w++)
            {
                if (m[sn[p][w]] == 1) // 1 no condition
                {
                    total += 3;
                }
                else if (m[sn[p][w]] == 2) // 2 no condition
                {
                    total += 1;
                }
                // else
                //{
                //     total += 0;
                // }
            }
            cout << total << " ";
            total = 0; // 3 no condition
        }
        cout << endl;
    }
    return 0;
}