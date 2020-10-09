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

lli fast_exp(lli a, lli x, lli p) {
    lli res = 1;
    while(x) {
        if(x & 1) {
            res *= a;
            res %= p;
        }
        x = x >> 1;
        a = (a * a) % p;
    }
    return res % p;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli a, n, p;
        cin >> a >> n >> p;
        lli prod = a;
        For(i, 2, n + 1) {
            prod = fast_exp(prod, 1LL * i, p);
            prod %= p;
        }
        cout << prod << "\n";
    }
}