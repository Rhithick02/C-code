//incomplete
#include <bits/stdc++.h>
using namespace std;
#define lli long long
#define mod 1000000007
int main()
{
    lli n, k, sum = 0, t1, t2;
    cin >> n >> k;
    vector<int> ar(n), pref(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    sort(ar.rbegin(), ar.rend());
    for (int i = 0; i < n; i++)
    {
        pref[i] = sum;
        sum -= ar[i];
    }
    pref[n] = 0;
    sum = 0, t1 = 0, t2 = 0;
    for (int i = 0; i < n; i++)
    {
        t1 += ar[i] * (n - 1 - i), t1 %= mod;
        t2 += pref[i + 1] % mod;
    }
    sum = (2 * t1 - 2 * t2 + mod) % mod;
    cout << sum;
    return 0;
}