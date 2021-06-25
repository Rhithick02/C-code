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
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int dfs(vector <int> ar[], vector <bool> &vi, vector <int> &child, int s) {
    vi[s] = true;
    for(auto it: ar[s]) {
        if(vi[it]) continue;
        child[s] += dfs(ar, vi, child, it);
    }
    return 1 + child[s];
}
int main() {
    int n;
    cin >> n;
    vector <int> ar[n+1];
    vector <bool> vi(n+1);
    vector <int> child(n+1);
    for(int i = 0, x; i < n-1; i++) {
        cin >> x;
        ar[i+2].pb(x);
        ar[x].pb(i+2);
    }
    dfs(ar, vi, child, 1);
    for(int i = 1; i <= n; i++) cout << child[i] << " ";
}