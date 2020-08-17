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
#define mod 1000000007

int main(){
    ios::sync_with_stdio(false);
    lli res = 1;
    int n, q, l, r;
    string s;
    cin >> n >> q >> s;
    vector <int> pref(n+1);
    vector <lli> prod(2);
    prod[1] = 1;
    For(i, 0, n-1) {
        res *= 2;
        res %= mod;
        prod.pb(res);
    }
    For(i, 1, n + 1) {
        pref[i] = pref[i-1] + s[i-1] - '0';
        prod[i] = (prod[i] + prod[i-1]) % mod;
    }
    For(i, 0, q) {
        cin >> l >> r;
        int w = r - l + 1;
        int one = pref[r] - pref[l-1];
        lli sum = (prod[w] - prod[w - one] + mod) % mod;
        cout << sum << "\n";
    }
}