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
#define mod 998244353
#define MAX 300001

vector <lli> fact(MAX), den(MAX);
int nck(int bal, int k) {
    if(bal < k || k < 0) return 0;
    // else return fact[bal] / fact[k]; find mod inversel
}
int main(){
    ios::sync_with_stdio(false);
    lli ans = 0;
    int n, k, l, r, bal = 0;
    cin >> n >> k;
    fact[0] = 1;
    For(i, 1, n + 1) {
        fact[i] = 1LL * i * fact[i-1];
        fact[i] %= mod;
    }
    vector <pair<int, int>> ar;
    For(i, 0, n) {
        cin >> l >> r;
        ar.pb({l, 1});
        ar.pb({r + 1, -1});
    }
    sort(asc(ar));
    for(auto it: ar) {
        if(it.se == 1) {
            bal++;
            ans += nck(bal - 1, k - 1);
            ans %= mod;
        } else bal--;
    }
}