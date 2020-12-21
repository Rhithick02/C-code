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
    int n, m, cnt = 0;
    cin >> n >> m;
    vector <pair<int, int>> ar(n);
    vector <int> ans;
    For(i, 0, n) cin >> ar[i].fi >> ar[i].se;
    For(i, 1, m + 1) {
        bool ok = true;
        For(j, 0, n) {
            if(i >= ar[j].fi && i <= ar[j].se) ok = false;
        }
        if(ok) {
            cnt++;
            ans.pb(i);
        }
    }
    cout << cnt << endl;
    for(auto it: ans) cout << it << " ";
}