#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i <= s; i++) // a
    {
        for (int j = 0; j <= s - i; j++) // b
        {
            for (int k = 0; k <= s - i - j; k++) // c
            {
                int sum = i + j + k;
                int product = i * j * k;
                if (sum <= s && product <= t)
                {
                    // printf("(%d,%d,%d)\n", i, j, k); //triple gulo print krlm
                    cnt++;
                }
            }
        }
    }
    printf("%d\n", cnt); // total triple
    return 0;
}
