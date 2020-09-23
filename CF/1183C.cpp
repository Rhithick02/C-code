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
    int t;
    cin >> t;
    while (t--)
    {
        lli k, n, a, b, count = 0;
        cin >> k >> n >> a >> b;
        if(k - n*a > 0) cout<<n;
        else
        {
            k = abs(k - n*a) + 1;
            count = (k + a - b - 1)/(a-b);
            if(count > n) cout<<-1;
            else cout<< n - count;
        }
        cout<<endl;
    }
    return 0;
}