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
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

vector <lli> fact(1005), inv(1005);
lli power(lli x, lli y) {
    lli val = 1;
    while(y) {
        if(y & 1) {
            val = (val * x) % mod; 
        }
        x = (x * x) % mod;
        y = y >> 1;
    }
    return val;
}
lli res(int a, int b) {
    return (fact[a] * ((inv[b] * inv[a-b]) % mod)) % mod;
}

int main() {
    fact[0] = inv[0] = 1;
    for(int i = 1; i <= 1004; i++) {
        fact[i] = (1ll * i * fact[i-1]) % mod;
    }
    for(int i = 1; i <= 1004; i++) {
        inv[i] = power(fact[i], mod-2);
    }
    int t;
    cin >> t;
    while(t--) {
        lli ans = 1;
        int n, k, r = 1;
        cin >> n >> k;
        vector <int> ar(n), st(1005), ne_w(1005);
        set <int> te;
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
            st[ar[i]]++;
        }
        sort(des(ar));
        for(int i = 0; i < k; i++) {
            ne_w[ar[i]]++;
        }
        for(int i = 1; i < 1005; i++) {
            ans = (ans * res(1ll * st[i], 1ll * ne_w[i])) % mod;
        }
        cout << ans << "\n";
    }
}