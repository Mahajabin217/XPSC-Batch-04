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
        string name = "meow";
        for (char &ch : s)
        {
            ch = tolower(ch);
        }
        //cout << s << endl;
        string s2 = "";
        for (int i = 0; i < n; i++)
        {
            if (s2.empty() || s2.back() != s[i])
            {
                s2.push_back(s[i]);
            }
        }
        if (name == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
