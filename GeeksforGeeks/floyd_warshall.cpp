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

int main() {
    int n, m, u, v, w;
    cin >> n >> m;
    vector <vector <int>> ar(n+1, vector <int> (n+1, mod));
    for(int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        ar[u][v] = w;
        ar[v][u] = w;
    }
    for(int i = 1; i <= n; i++) {
        ar[i][i] = 0;
    }
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                ar[i][j] = min(ar[i][j], ar[i][k] + ar[k][j]);
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
}