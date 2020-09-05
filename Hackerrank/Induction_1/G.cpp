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
    int n, r, u, v;
    cin >> n >> r;
    vector <lli> ar[n], res(n);
    For(i, 0, r) {
        cin >> u >> v;
        ar[u].pb(v);
        ar[v].pb(u);
    }
    For(i, 0, n) {
        if(ar[i].size() == 1) {
            res[i]++;
            res[ar[i][0]]++;
        }
    }
    sort(asc(res));
    cout << res[n - 1] << " " << res[0] << endl;
}