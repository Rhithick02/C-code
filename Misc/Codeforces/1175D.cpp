#include <bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(), x.end()
#define des(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second

int main()
{
    lli cost = 0;
    int n, k, flag;
    cin >> n >> k;
    vil ar(n), sux(n);
    For(i, n) cin >> ar[i];
    sux[n - 1] = ar[n - 1];
    for (int i = n - 2; i >= 0; i--)
        sux[i] = ar[i] + sux[i + 1];
    cost += sux[0];
    sort(sux.begin() + 1, sux.end(),greater<lli>());
    for(int i = 1; i < k; i++)
        cost += sux[i];
    cout << cost << endl;
    return 0;
}