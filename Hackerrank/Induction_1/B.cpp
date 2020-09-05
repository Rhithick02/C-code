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
    int n, ans = 0;
    cin >> n;
    vector <pair<int, int>> a(n), b(n);
    map <int, int> st;
    For(i, 0, n) cin>>a[i].fi, a[i].se=i+1;
    For(i, 0, n) cin>>b[i].fi, b[i].se=i+1;
    sort(asc(a));
    sort(asc(b));
    For(i, 0, n){
        int ind = lower_bound(asc(b), make_pair(a[i].fi, 0)) - b.begin();
        if(a[i].se >= b[ind].se) st[a[i].se - b[ind].se]++;
        else st[n - b[ind].se + a[i].se]++;
    }
    for(auto it: st) ans = max(ans, it.se);
    cout << ans << endl;
}