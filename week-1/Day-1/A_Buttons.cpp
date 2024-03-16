#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    //if (a > b)
     //   b++;
    int ans = max(a + a - 1, max(b + b - 1, a + b));
    cout << ans << endl;
    return 0;
}