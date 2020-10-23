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
int main(){
    ios::sync_with_stdio(false);
    // n!(sum ((-1)^i/i!))
    lli sum = 0;
    int n;
    cin >> n;
    vector <lli> fact(n+1), inv(n+1);
    fact[0] = 1;
    For(i, 1, n + 1) {
        fact[i] = (i * fact[i-1]) % mod;
        inv[i] = power(fact[i], mod-2);
    }
    sum += fact[n];
    For(i, 1, n + 1) {
        if(i & 1) sum = (sum - (fact[n] * inv[i]) % mod + mod) % mod;
        else sum = (sum + (fact[n] * inv[i]) % mod) % mod;
    }
    cout << sum << "\n";
}