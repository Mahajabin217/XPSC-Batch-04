#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i <= c; i++) // Ebony r jnw
    {
        for (int j = 0; j <= c; j++) // Ivory r jnw
        {
            int total = i * a + j * b; 
            if (total == c)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}