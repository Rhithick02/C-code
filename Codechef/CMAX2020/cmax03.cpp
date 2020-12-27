#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define MAX 100005
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

vector <lli> fact(MAX, 1), inv(MAX, 1);
lli power(lli x, lli y) {
    lli res = 1;
    while(y > 0) {
        if(y & 1)
            res = (res * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}

lli ncr(lli n, lli r) {
    return (fact[n] * (inv[r] * inv[n-r]) % mod) % mod;
}

int main(){
    ios::sync_with_stdio(false);
    For(i, 1, MAX) {
        fact[i] = 1ll * i * fact[i-1];
        fact[i] %= mod;
        inv[i] = power(fact[i], mod-2);
    }
    int t;
    cin >> t;
    while(t--) {
        lli n, low, high, sum = 0;
        cin >> n >> low >> high;
        if((high - low + 1) % 2 == 0) {
            gap = (high - low + 1) / 2;
            For(i, 0, n / 2 + 1) {
                sum += ncr((n * gap) % mod, 2 * i);
                sum %= mod;
            }
        }
    }
}