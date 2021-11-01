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

int n, q;
int child[200005][30];
void find_child(int x, int k) {
    for(int i = 0; i < 30; i++) {
        if(k & (1 << i)) {
            x = child[x][i];
        }
    }
    cout << x << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for(int i = 1; i <= n; i++) {
        cin >> child[i][0];
    }
    for(int i = 1; i < 30; i++) {
        for(int j = 1; j <= n; j++) {
            child[j][i] = child[child[j][i-1]][i-1];
        }
    }
    for(int i = 0, x, k; i < q; i++) {
        cin >> x >> k;
        find_child(x, k);
    }
}