#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    int n;
    lli res = 1e18;
    cin >> n;
    vector <lli> ar(2 * n);
    For(i, 0, 2 * n) cin >> ar[i];
    sort(asc(ar));
    res = (ar[n - 1] - ar[0]) * (ar[2 * n - 1] - ar[n]);
    For(i, 1, n) {
        lli te = (ar[i + n - 1] - ar[i]) * (ar[2 * n - 1] - ar[0]);
        res = min(te, res);
    }
    cout << res << endl;
}