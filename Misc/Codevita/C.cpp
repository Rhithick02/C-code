#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define MAX 10005
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

vector <int> edge[MAX];
vector <bool> vi(MAX, false);
vector <lli> ar(MAX);
lli cost = 0, res = 0, siz = mod;
void dfs(int start, vector <int> &temp) {
    temp.pb(start);
    cost += ar[start-1];
    vi[start] = true;
    for(auto it: edge[start]) {
        if(vi[it]) continue;
        dfs(it, temp);
    }
}
int main(){
    ios::sync_with_stdio(false);
    int n, p, u, v;
    cin >> n;
    map <lli, vector<vector<int>>> mp;
    vector <lli> ans;
    For(i, 0, n) cin >> ar[i];
    cin >> p;
    For(i, 0, p) {
        cin >> u >> v;
        edge[u].pb(v);
        edge[v].pb(u);
    }
    For(i, 1, n+1) {
        if(!vi[i]) {
            vector <int> temp;
            cost = 0;
            dfs(i, temp);
            mp[cost].pb(temp);
            res = max(res, cost);
        }
    }
    for(auto it: mp[res]) {
        siz = min(siz, (lli)it.size());
    }
    for(auto &it: mp[res]) {
        if((lli)it.size() == siz) {
            for(auto ti: it) {
                ans.pb(ti);
            }
        }
    }
    sort(asc(ans));
    for(auto it: ans) {
        cout << it << " ";
    }
}