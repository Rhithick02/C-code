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

vector <lli> fact(200001), inv(200001);
lli ncr(int n, int r) {
    if(r > n) return 0;
    return (((fact[n] * inv[n-r]) % mod) * inv[r] % mod);
}
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

int main() {
    ios::sync_with_stdio(false);
    fact[0] = inv[0] = 1;
    For(i, 1, 200001) {
        fact[i] = (1ll * i * fact[i-1]) % mod;
        inv[i] = power(fact[i], mod - 2);
    }
    int t;
    cin >> t;
    while(t--) {
        lli ans = 0;
        int n, m, k;
        cin >> n >> m >> k;
        vector <int> ar(n);
        For(i, 0, n) cin >> ar[i];
        sort(asc(ar));
        For(i, 0, n) {
            int pos = upper_bound(asc(ar), ar[i]+k) - ar.begin() - 1;
            ans = (ans + ncr(pos-i, m-1)) % mod;
        }
        cout << ans << "\n";
    }
}