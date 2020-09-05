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
    int n, u, v, cnt = 0;
    cin >> n;
    vector <int> ar[n + 1], res(n + 1);
    vector <bool> vi(n + 1);
    For(i, 0, n - 1) {
        cin >> u >> v;
        ar[u].pb(v);
        ar[v].pb(u);
    }
    queue <int> q;
    q.push(1);
    while(!q.empty()) {
        int cur = q.front();
        vi[cur] = true;
        q.pop();
        if(!res[cur]) {
            res[cur] = 1;
            cnt++;
        }
        int fl = 0;
        for(auto it: ar[cur]) {
            if(vi[it]) continue;
            res[it] = 1;
            if(ar[it].size() == 1) fl = 1;
            q.push(it);
        }
        if(fl) cnt++;
    }
    cout << cnt << endl;
}