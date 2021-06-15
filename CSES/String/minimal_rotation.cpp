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
int get(vector <lli> &pref, vector <lli> &h, vector <lli> &inv, int l, int r) {
    return (1ll * (pref[r] - pref[l - 1] + mod) * inv[l - 1]) % mod;
}
int main() {
    string s;
    cin >> s;
    s += s;
    int n = s.length(), p = 131;
    vector <lli> h(n), pref(n+1), inv(n);
    h[0] = inv[0] = 1;
    for(int i = 1; i < n; i++) {
        h[i] = (1ll * h[i-1] * p) % mod;
        inv[i] = power(h[i], mod - 2);
    }
    for(int i = 0; i < n; i++) {
        pref[i+1] = (pref[i] + 1ll * (s[i] - 'a' + 1) * h[i]) % mod;
    }
    n /= 2;
    // cout << s;
    int k = 1;
    for(int i = 2; i <= n; i++) {
        int low = 0, high = n - 1, mid;
        while(low <= high) {
            mid = (low + high) >> 1;
            if(get(pref, h, inv, i, i + mid) == get(pref, h, inv, k, k + mid)) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if(low < n && s[i + low - 1] < s[k + low - 1]) {
            k = i;
        }
    }
    
    k--;
    for(int i = k; i < k + n; i++) {
        cout << s[i];
    }
}