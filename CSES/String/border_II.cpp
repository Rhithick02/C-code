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
int main() {
    string s;
    cin >> s;
    int n = s.length(), p = 31;
    vector <lli> pref(n+1), h(n), inv(n);
    h[0] = inv[0] = 1;
    for(int i = 1; i < n; i++) {
        h[i] = (1ll * h[i-1] * p) % mod;
        inv[i] = power(h[i], mod - 2);
    }
    for(int i = 0; i < n; i++) {
        pref[i+1] = (pref[i] + 1ll * (s[i] - 'a' + 1) * h[i]) % mod;
    }
    for(int i = 1; i < n; i++) {
        if((pref[i] * h[n - i]) % mod == (pref[n] - pref[n-i] + mod) % mod) {
            cout << i << " ";
        }
    }
}