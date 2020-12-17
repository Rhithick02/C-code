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
#define MAX 100001
#define mod 1000000007
vector <int> ar[MAX], child(MAX);
vector <bool> vi(MAX);
vector <lli> st;
int n, u, v, m;
int dfs(int start) {
    vi[start] = true;
    for(auto it: ar[start]) {
        if(vi[it]) continue;
        int ch = dfs(it);
        child[start] += ch;
        lli te = 1LL * ch * (n - ch);
        st.pb(te);
    }
    return child[start] + 1;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli res = 0;
        cin >> n;
        For(i, 1, n + 1) {
            ar[i].clear();
            vi[i] = false;
            child[i] = 0;
        }
        st.clear();
        For(i, 0, n - 1) {
            cin >> u >> v;
            ar[u].pb(v);
            ar[v].pb(u);
        }
        cin >> m;
        vector <lli> pr(m);
        For(i, 0, m) cin >> pr[i];
        dfs(1);
        if(pr.size() < st.size())
            For(i, 0, n - m - 1) pr.pb(1);
        sort(asc(pr));
        sort(asc(st));
        if(pr.size() > st.size()) {
            while(st.size() < pr.size()) {
                lli te = pr.back() % mod;
                pr.pop_back();
                pr.back() = ((pr.back() % mod) * te) % mod;
            }
        }
        For(i, 0, st.size())
            res = (res + (st[i] % mod) * (pr[i] % mod)) % mod;
        cout << res << "\n";
    }
}