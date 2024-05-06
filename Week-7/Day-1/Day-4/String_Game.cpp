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
        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        int min_val = min(one, zero);
        if (min_val % 2 == 0)
            cout << "Ramos" << endl; // even hole ramos
        else
            cout << "Zlatan" << endl; // odd hole zlatan
    }
    return 0;
}