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
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

vector <lli> fact(1000001), inv(1000001);
lli power(lli x, lli y) {
    lli prod = 1;
    while(y) {
        if(y & 1)
            prod = (prod * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return prod;
}
lli calc(lli a, lli b) {
    return (fact[a] * ((inv[b] * inv[a-b]) % mod)) % mod;
}
int main(){
    ios::sync_with_stdio(false);
    fact[0] = inv[0] = 1;
    For(i, 1, 1000001) 
        fact[i] = (1LL * i * fact[i-1]) % mod;
    For(i, 1, 1000001) 
        inv[i] = power(fact[i], mod-2);
    int t;
    cin >> t;
    while(t--) {
        lli a, b;
        cin >> a >> b;
        cout << calc(a, b) << "\n";
    }
}