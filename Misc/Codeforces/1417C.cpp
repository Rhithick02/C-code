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
        int n, val, mini = 0;
        cin >> n;
        vector <int> ar(n), st[n + 1], res(n + 1, 1e9);
        For(i, 0, n) {
            cin >> ar[i];
            st[ar[i]].pb(i + 1);
        }
        For(i, 1, n + 1) st[i].pb(n + 1);
        For(i, 1, n + 1) {
            if(st[i].size() == 1) continue;
            int len = st[i][0];
            For(j, 1, st[i].size())
                len = max(len, st[i][j] - st[i][j - 1]);
            res[len] = min(res[len], i);
        }
        For(i, 2, n + 1) res[i] = min(res[i], res[i-1]);
        For(i, 1, n + 1)
            cout << (res[i] != 1e9 ? res[i]: -1) << " ";
        cout << "\n";
    }
}