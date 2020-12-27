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
#define MAX 1000001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

vector <lli> phi(MAX), pref(MAX);

int main(){
    ios::sync_with_stdio(false);
    For(i, 0, MAX) phi[i] = i;
    For(i, 2, MAX) {
        if(phi[i] == i) {
            for(int j = i; j < MAX; j += i) {
                phi[j] -= phi[j] / i;
            }
        }
    }
    For(i, 1, MAX) pref[i] = (pref[i-1] + phi[i]) % mod;
    int t;
    cin >> t;
    while(t--) {
        lli sum = 0;
        int n;
        cin >> n;
        For(i, 1, n+1) {
            vector <pair<int, int>> st;
            for(int j = 0; ; j = i / (i / (j+1))) {
                int next = i / (i / (j+1));
                st.pb({next, i / (j+1)});
                if(next == i) break;
            }
            For(j, 0, st.size()) {
                if(!j) {
                    sum += st[0].fi * st[0].se * pref[1];
                } else {
                    int dif = st[j].fi-st[j-1].fi;
                    int toti = pref[st[j].fi]-pref[st[j-1].fi];
                    sum += 1ll * dif * st[j].se * toti;
                }
                sum %= mod;
            }

        }
        cout << sum << "\n";
    }
}