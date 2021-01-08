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
    lli n, m, ans = 0;
    cin >> n >> m;
    For(i, 1, min(n + 1, m + 1)) {
        For(j, 1, min(n + 1, m + 1)) {
            if((i*i + j*j) % m) continue;
            ans += 1LL * ((n - i) / m + 1) * ((n - j) / m + 1);
        }
    }
    cout << ans << "\n";
}