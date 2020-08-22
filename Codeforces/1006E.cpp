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
#define MAX 200001
int lst[MAX], child[MAX], st[MAX], k;
vector <int> ar[MAX];
bool v[MAX];
int dfs(int start) {
    lst[k++] = start;
    v[start] = true;
    for(auto it: ar[start]) {
        if(v[it]) continue;
        child[start] += dfs(it);
    }
    return child[start] + 1;
}
int main(){
    ios::sync_with_stdio(false);
    int n, q, x, k, cnt = 0;
    cin >> n >> q;
    For(i, 2, n + 1) {
        cin >> x;
        ar[x].pb(i);
        ar[i].pb(x);
    }
    dfs(1);
    For(i, 0, n) st[lst[i]] = cnt++;
    For(i, 0, q){
        cin >> x >> k;
        if(k - 1 > child[x]) cout << "-1\n";
        else cout << lst[st[x] + k - 1] << "\n";
    }
}