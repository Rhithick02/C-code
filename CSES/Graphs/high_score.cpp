#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int n, m, fl = 0, lf = 0;
void reverse(vector <int> rev[], vector <pair<int, int>> ar[]) {
    for(int i = 1; i <= n; i++) {
        for(auto it: ar[i]) {
            rev[it.fi].pb(i);
        }
    }
}

bool dfs(vector <int> ar[], int s, vector <bool>& vi, vector <bool>& check) {
    check[s] = true;
    for(auto it: ar[s]) {
        if(check[it]) continue;
        if(vi[it]) {
            lf = 1;
            return true;
        }
        dfs(ar, it, vi, check);
        if(lf) return true;
    }
    return false;
}
int main() {
    cin >> n >> m;
    vector <pair <int, int>> ar[n+1];
    vector <bool> vi(n+1, false);
    vector <lli> dist(n+1, 1e15);
    for(int i = 0, u, v, w; i < m; i++) {
        cin >> u >> v >> w;
        ar[u].pb({v, -w});
    }
    dist[1] = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= n; j++) {
            for(auto it: ar[j]) {
                if(dist[j] < 1e15 && dist[it.fi] > dist[j] + it.se) {
                    dist[it.fi] = dist[j] + it.se;
                    if(i == n-1) {
                        vi[it.fi] = true;
                        fl = 1;
                    }
                }
            }
        }
    }
    if(!fl) {
        cout << -dist[n] << endl;
        exit(0);
    }
    vector <int> rev[n+1];
    vector <bool> check(n+1, false);
    reverse(rev, ar);
    if(dfs(rev, n, vi, check)) {
        cout << -1 << endl;
    } else {
        cout << -dist[n] << endl;
    }
}