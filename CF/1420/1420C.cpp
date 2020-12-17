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
    int t;
    cin >> t;
    while(t--) {
        lli n, q, res = 0;
        bool ok = true;
        cin >> n >> q;
        vector <lli> ar(n), st;
        For(i, 0, n) cin >> ar[i];
        st.pb(ar[0]);
        lli sum = ar[0];
        res = sum;
        For(i, 1, n) {
            if(ok) {
                if(ar[i] > st.back()) {
                    sum += ar[i] - st.back();
                    st.pop_back();
                    st.pb(ar[i]);
                } else {
                    ok = false;
                    st.pb(ar[i]);
                    sum -= ar[i];
                }
            } else {
                if(ar[i] < st.back()) {
                    sum += st.back() - ar[i];
                    st.pop_back();
                    st.pb(ar[i]);
                } else {
                    ok = true;
                    st.pb(ar[i]);
                    sum += ar[i];
                }
            }
            res = max(res, sum);
        }
        cout << res << "\n";
    }
}