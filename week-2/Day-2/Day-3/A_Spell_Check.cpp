#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string c = "Timur";
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        sort(c.begin(),c.end());
        //if (n != 5)
        //{
        //    cout << "NO" << endl;
        //    continue;
        //}
        if (s == c)
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
