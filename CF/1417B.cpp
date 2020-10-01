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
        int n, T, cnt = 0;
        cin >> n >> T;
        vector <int> ar(n), res(n);
        map <int, vector <int>> mp;
        For(i, 0, n) {
            cin >> ar[i];
            mp[ar[i]].pb(i);
        }
        for(auto it: mp) {
            if(2 * it.fi != T) {
                if(mp[T-it.fi].size()) {
                    for(auto ti : it.se) res[ti] = 0;
                    mp[it.fi].clear();
                } else {
                    for(auto ti: it.se) res[ti] = 1;
                }
            } else {
                for(auto ti: it.se) {
                    res[ti] = (cnt ? 0 : 1);
                    cnt ^= 1;
                }
            }
        }
        for(auto it: res) cout << it << " ";
        cout << "\n";
    }
}