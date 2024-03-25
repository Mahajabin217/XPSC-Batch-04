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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            string s;
            cin >> s;
            for (char ch : s)
            {
                if (ch == 'U') // up moves 
                {
                    arr[i] = (arr[i] + 9) % 10;
                }
                else if (ch == 'D') // down moves 
                {
                    arr[i] = (arr[i] + 1) % 10;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}