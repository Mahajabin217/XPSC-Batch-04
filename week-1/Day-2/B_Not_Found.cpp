#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    //bool ch[26] = {0};
    for (char i = 'a'; i <= 'z'; i++)
    {
        int ch = 0;
        for (char x : s)
        {
            if (x == i)
            {
                ch = 1;
                break;
            }
        }
        if (!ch)
        {
            cout << i << endl;
            // break;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
