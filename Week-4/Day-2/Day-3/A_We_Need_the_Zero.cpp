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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int element = 0;
        for (int i = 0; i < n; i++)
        {
            element ^= a[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[i] ^= element;
        }
        int duplicate = 0;
        for (int i = 0; i < n; i++)
        {
            duplicate ^= a[i];
        }
        if (duplicate == 0)
        {
            cout << element << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
