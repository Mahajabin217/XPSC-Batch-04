#include <bits/stdc++.h>
using namespace std;
bool kalindrome(vector<int> v, int x)
{
    int n = v.size(), i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i] == x)
        {
            i++;
        }
        else if (v[j] == x)
        {
            j--;
        }
        else if (v[i] != v[j])
        {
            return 0;
        }
        else
        {
            i++;
            j--;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool ans = 1;
        for (int i = 0; i < n - 1 - i; i++)
        {
            if (v[i] != v[n - 1 - i])
            {
                ans = kalindrome(v, v[i]) || kalindrome(v, v[n - 1 - i]);
                break;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
