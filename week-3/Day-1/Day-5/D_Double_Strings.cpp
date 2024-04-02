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
        string s[n];
        int a[n];
        set<string> st;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            st.insert(s[i]);
            a[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < s[i].size(); j++)
            {
                string s1 = "";
                string s2 = "";
                for (int k = 0; k < j; k++)
                    s1 += s[i][k];
                for (int k = j; k < s[i].size(); k++)
                    s2 += s[i][k];
                if (st.find(s1) != st.end() && st.find(s2) != st.end())
                {
                    a[i] = 1;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
