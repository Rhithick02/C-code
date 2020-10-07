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
    string s;
    vector <int> alp(26);
    cin >> s;
    fact[0] = 1;
    int n = s.length();
    For(i, 0, n) 
        alp[s[i] - 'a']++;
    For(i, 1, 1000001) {
        fact[i] = (1LL * i * fact[i-1]) % mod;
        inv[i] = 1LL * power(fact[i], mod-2);
    }
    lli ans = fact[n];
    For(i, 0, 26) {
        if(!alp[i]) continue;
        ans = (ans * inv[alp[i]]) % mod;
    }
    cout << ans << "\n";
}