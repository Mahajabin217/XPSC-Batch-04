#include <bits/stdc++.h>
using namespace std;
pair<int, int> xorry(int x)
{
    int a = 0, b = 0;
    int bit = 0;
    while ((1 << bit) <= x)
    {
        bit++;
    }
    int ans = (1 << (bit - 1));
    a = ans;
    b = a ^ x;
    return {b, a};
}
int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        pair<int, int> res = xorry(x);
        cout << res.first << " " << res.second << endl;
    }
    return 0;
}