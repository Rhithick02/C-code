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
    int n, m, x, res = 0;
    cin >> n >> m;
    vector <int> a(n), b(m+2), prea(n+1);
    For(i , 0, n) {
        cin >> a[i];
        prea[i+1] = prea[i] + a[i];
    }
    For(i , 1, m + 1) cin >> b[i];
    cin >> x;
    For(i, 1, n + 1) {
        int mini = 1e9, l = 1, r = 1, te = b[1];
        For(j, 0, n +1 - i)
            mini = min(mini, prea[i+j] - prea[j]);
        while(r <= m) {
            if (1LL * te * mini <= 1LL * x) {
                te += b[++r];
                res = max(res, i * (r - l));
            }
            else te -= b[l++];
        }
    }
    cout << res << "\n";
}