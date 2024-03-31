#include <bits/stdc++.h>
#define ll long long
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
        ll total = 0;
        int change = 0;
        vector<ll> a;
        for (int i = 0; i < n; i++)
        {
            ll left = i;
            ll right = n - i - 1;
            if (s[i] == 'L') // left a thke
            {
                if (right > left) // bt right a jdi bsi value thke
                {
                    change++;
                    total += right;
                    a.push_back(right - left);
                }
                else // jdi left ai bsi value thke
                {
                    total += left;
                }
            }
            else
            {
                if (left > right) //left a jdi bsi value thke 
                {
                    change++;
                    a.push_back(left - right);
                    total += left;
                }
                else
                {
                    total += right; // jdi right ai bsi value thke 
                }
            }
        }
        vector<ll> ans(n+1);
        for (int i = change; i <= n; i++)
        {
            ans[i] = total;
        }
        sort(a.begin(), a.end(), greater<ll>());
        for (int i = change - 1; i >= 1; i--)
        {
            total -= a.back();
            a.pop_back();
            ans[i] = total;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}