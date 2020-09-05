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

int vis[1001];
vector< int > to[1001];

void dfs(int u) {
    vis[u] = 1;
    for(auto x : to[u]) {
        if (!vis[x]) {
            dfs(x);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector < pair < int, int > > V(n);
    For(i, 0, n) cin >> V[i].fi >> V[i].se;
    For(i, 0, n) {
        For(j, 0, n) {
            if (i != j) {
                if (V[i].fi == V[j].fi || V[i].se == V[j].se) {
                    to[i].pb(j);
                }
            }
        }
    }
    int cnt = 0;
    For(i, 0, n) {
        if (!vis[i]) {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt - 1 << '\n';
}