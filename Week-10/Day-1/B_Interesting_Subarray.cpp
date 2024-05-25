#include <iostream>
#include <vector>
using namespace std;

void subarray(vector<int> &a, int n)
{
    int cnt = 0;
    for (int i = 1; i < n; ++i)
    {
        // if (abs(a[i] - a[i + 1]) >= 2)
        if (max(a[i], a[i - 1]) - min(a[i], a[i - 1]) >= 2)
        {
            cout << "YES" << endl;
            cout << i << " " << i + 1 << endl;
            cnt = 1;
            return;
        }
    }
    if (!cnt)
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        subarray(a, n);
    }
    return 0;
}
