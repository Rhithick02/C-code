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

int main() {
    string s;
    cin >> s;
    int n = s.length(), p = 31;
    vector <lli> h(n), pref(n+1);
    h[0] = 1;
    for(int i = 1; i < n; i++) {
        h[i] = (1ll * h[i-1] * p) % mod;
    }
    for(int i = 0; i < n; i++) {
        pref[i+1] = (pref[i] + 1ll * (s[i] - 'a' + 1) * h[i]) % mod;
    }
    for(int i = 1; i <= n; i++) {
        int j;
        bool ok = true;
        for(j = 2 * i; j <= n; j += i) {
            if((pref[i] * h[j - i]) % mod != (pref[j] - pref[j - i] + mod) % mod) {
                ok = false;
                break;
            }
        }
        if(!ok) continue;
        if(j - i != n) {
            j -= i;
            int len = n - j;
            if((pref[len] * h[n-len]) % mod != (pref[n] - pref[n - len] + mod) % mod) {
                ok = false;
            }
        }
        if(ok) {
            cout << i << " ";
        }
    }
}