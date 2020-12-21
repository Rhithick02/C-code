#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    int n, l, r, ans = 0, val;
    cin >> n;
    vector <pair<int, int>> st, te;
    vector <int> ar, res(2 * n + 1), pref(2 * n + 1);
    For(i, 0, n) {
        cin >> l >> r;
        st.pb({l, r});
        ar.pb(l), ar.pb(r + 1);
    }
    sort(asc(ar));
    ar.resize(unique(asc(ar)) - ar.begin());
    for(auto it: st) {
        l = lower_bound(asc(ar), it.fi) - ar.begin();
        r = lower_bound(asc(ar), it.se + 1) - ar.begin();
        pref[l]++, pref[r]--;
    }
    For(i, 1, 2 * n + 1) pref[i] += pref[i-1];
    For(i, 0, 2 * n + 1) {
        if(pref[i] < n - 1) continue;
        int fl = 0;
        ans = max(ans, ar[i+1] - ar[i] - 1);
        if(pref[i] == n) {
            if(pref[i] - pref[i+1] == 1)
                ans = max(ans, ar[i+2] - ar[i] - 1), fl++;
            if(pref[i] - pref[i-1] == 1)
                ans = max(ans, ar[i+1] - ar[i-1] - 1), fl ++;
            if(fl == 2) {
                te.pb({ar[i], ar[i+1]-1});
                if(i + 2 < ar.size()) 
                    val = ar[i+2] - ar[i-1] - 1;
            }
        }
    }
    if(te.size()) {
        for(auto it: st){
            if(it == te[0]) {
                ans = val;
                break;
            }
        }
    }
    cout << ans << endl;
}