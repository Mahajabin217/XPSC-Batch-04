#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int a = 0; a <= k; a++)
    {
        for (int b = 0; b <= k; b++)
        {
            // for (int c = 0; c <= k; c++) //Approach-1 bt tle
            //{
            // if ((a + b + c) == s)
            //{
            //     cnt++;
            // }
            int ans = s - a - b;
            if (ans >= 0 && k >= ans)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}