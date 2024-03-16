#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int time = (t + 0.5) / a;
    int biscute = time * b;
    cout << biscute << endl;
    return 0;
}