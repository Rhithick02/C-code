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

lli sum(lli l, lli r) {
    lli te1 = (r * (r + 1) >> 1) % mod;
    lli te2 = (l * (l + 1) >> 1) % mod;
    return (te1 - te2 + mod) % mod;
}

int main(){
    ios::sync_with_stdio(false);
    lli n, res = 0, k = 1;
    cin >> n;
    while(true) {
        lli temp = (sum((n / (k + 1)) % mod, (n / k) % mod) * (k % mod)) % mod;
        res = (res + temp) % mod;
        if(k == n) break;
        k = n / (n / (k + 1));
    }
    cout << res << "\n";
}