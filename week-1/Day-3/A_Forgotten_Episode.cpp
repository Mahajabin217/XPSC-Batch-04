#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
    //for (int i = 1; i < n; i++)
    //{
     //   cout << arr[i] << " ";
    //}
    ll total = n*(n+1)/2; 
    ll sum = 0;
    for(ll num : arr)
    {
        sum += num; 
    }
    //int total = n*(n+1)/2;
    ll missing_num = total-sum; 
    cout << missing_num << endl;
    return 0;
}